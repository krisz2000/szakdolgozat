# Neurális hálózatok alkalmazása a sprouts játékban

A projekt futtatásához [docker](https://docs.docker.com/get-docker/) szükséges.

Docker image létrehozásához szükséges parancs:
`docker build -t sprouts .`

A tanító szkript futtatásához szükséges parancs:
`docker run -t -i --rm --mount type=bind,source="$(pwd)"/models,target=/app/models sprouts reinforcement_learning.py`

A tesztelő szkript futtatásához szükséges parancs:
`docker run -t -i --rm --mount type=bind,source="$(pwd)"/models,target=/app/models sprouts model_testing.py`
