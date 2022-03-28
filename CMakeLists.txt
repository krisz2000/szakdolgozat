CMAKE_MINIMUM_REQUIRED(VERSION 3.4)

PROJECT(sprouts)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)

find_package(Qt4 REQUIRED QtXml QtCore QtGui)

add_subdirectory(pybind11)

pybind11_add_module(sprouts
    representation_mapper.cpp
    glop-2.2/version2.2/src/stringconverter.cpp 
    glop-2.2/version2.2/src/baseclass/interface.cpp 
    glop-2.2/version2.2/src/baseclass/interfacewidget.cpp 
    glop-2.2/version2.2/src/baseclass/basegame.cpp 
    glop-2.2/version2.2/src/baseclass/basenode.cpp 
    glop-2.2/version2.2/src/baseclass/traversal.cpp 
    glop-2.2/version2.2/src/moveordering.cpp 
    glop-2.2/version2.2/src/displaypainter.cpp 
    glop-2.2/version2.2/src/computation/computationthread.cpp 
    glop-2.2/version2.2/src/computation/nodestore.cpp 
    glop-2.2/version2.2/src/computation/mainloop.cpp 
    glop-2.2/version2.2/src/computation/classicpnsearch.cpp 
    glop-2.2/version2.2/src/computation/database.cpp 
    glop-2.2/version2.2/src/computation/databasebutton.cpp 
    glop-2.2/version2.2/src/computation/trace.cpp 
    glop-2.2/version2.2/src/computation/tracewidget.cpp 
    glop-2.2/version2.2/src/node/winlossnode.cpp 
    glop-2.2/version2.2/src/node/nimbernode.cpp 
    glop-2.2/version2.2/src/node/scorenode.cpp 
    glop-2.2/version2.2/src/node/fulltreeinfo.cpp 
    glop-2.2/version2.2/src/node/fulltreenode.cpp 
    glop-2.2/version2.2/src/node/rct.cpp 
    glop-2.2/version2.2/src/node/rctmiserenode.cpp 
    glop-2.2/version2.2/src/sprouts/sproutsglobal.cpp 
    glop-2.2/version2.2/src/sprouts/representation.cpp 
    glop-2.2/version2.2/src/sprouts/boundary.cpp 
    glop-2.2/version2.2/src/sprouts/regionspr.cpp 
    glop-2.2/version2.2/src/sprouts/land.cpp 
    glop-2.2/version2.2/src/sprouts/position.cpp 
    glop-2.2/version2.2/src/board/board.cpp 
    glop-2.2/version2.2/src/board/splitboard.cpp 
    glop-2.2/version2.2/src/board/crambase.cpp 
    glop-2.2/version2.2/src/board/cram.cpp 
    glop-2.2/version2.2/src/board/dotsboxes.cpp 
    glop-2.2/version2.2/src/board/boardcompress.cpp 
    glop-2.2/version2.2/src/gameglobal.cpp 
    glop-2.2/version2.2/src/mainwidget/widgetpopup.cpp 
    glop-2.2/version2.2/src/mainwidget/glopwidget.cpp 
    glop-2.2/version2.2/src/mainwidget/childrentabwidget.cpp 
    glop-2.2/version2.2/src/mainwidget/repofile.cpp 
    glop-2.2/version2.2/src/gamewidget.cpp 
    glop-2.2/version2.2/src/glop.cpp 
    glop-2.2/version2.2/src/error.cpp 
    glop-2.2/version2.2/src/test/test.cpp 
    glop-2.2/version2.2/src/test/stringconverter_test.cpp 
    glop-2.2/version2.2/src/test/sprouts_test.cpp 
    glop-2.2/version2.2/src/test/board_test.cpp 
    glop-2.2/version2.2/src/test/dotsboxes_test.cpp 
    glop-2.2/version2.2/src/test/cram_test.cpp 
    glop-2.2/version2.2/src/test/memory_test.cpp
)

target_link_libraries(sprouts PRIVATE
    Qt4::QtXml
    Qt4::QtCore
    Qt4::QtGui
)