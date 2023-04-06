set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(HEADERS
    handler.h
    commands.h
)

set(SOURCES
    handler.cpp
    commands.cpp
)

add_library(handler STATIC ${HEADERS} ${SOURCES})
target_link_libraries(handler core)
