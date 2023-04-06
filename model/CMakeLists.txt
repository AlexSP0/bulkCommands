set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(HEADERS
    bulkmodel.h
)

set(SOURCES
    bulkmodel.cpp
)

add_library(model STATIC ${HEADERS} ${SOURCES})
target_link_libraries(model core)
