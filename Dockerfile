FROM ubuntu:18.04

# python telepítése
ENV py_version=3.9.7
WORKDIR /root/
RUN apt update -y 
RUN apt install build-essential gcc autoconf make automake \
    wget libssl-dev zlib1g-dev libncurses5-dev libncursesw5-dev \
    libreadline-dev libsqlite3-dev libgdbm-dev libdb5.3-dev \
    libbz2-dev libexpat1-dev liblzma-dev libffi-dev uuid-dev -y
RUN wget https://www.python.org/ftp/python/${py_version}/Python-${py_version}.tgz
RUN tar xzf Python-${py_version}.tgz
WORKDIR /root/Python-${py_version}
RUN ./configure --enable-optimizations --with-ensurepip=install
RUN make altinstall
RUN export PATH=/opt/python-${py_version}/bin:$PATH

RUN apt update && apt install -y \
    cmake \ 
    qt4-default  \
    git

# bináris fájl fordítása
WORKDIR /app
RUN git clone https://github.com/pybind/pybind11.git
COPY glop-2.2 glop-2.2
COPY pybind11 pybind11
COPY CMakeLists.txt build_source.sh representation_mapper.cpp ./
RUN ./build_source.sh

# SproutsML csomag függőségeinek telepítése
COPY requirements.txt requirements.txt
RUN pip3.9 install -r requirements.txt

# SproutsML csomag telepítése
COPY . .
RUN cp build/*.so SproutsML/sprouts.so
RUN pip3.9 install .

ENTRYPOINT [ "python3.9" ]