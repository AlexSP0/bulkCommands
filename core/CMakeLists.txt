set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(HEADERS
    ifaces.h
)

set(SOURCES

)

add_library(core STATIC ${HEADERS} ${SOURCES})
