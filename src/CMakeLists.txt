include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB SOURCES "*.cpp")

add_library(Solutions ${SOURCES})
set_property(TARGET Solutions PROPERTY CXX_STANDARD 20)
set_property(TARGET Solutions PROPERTY CXX_STANDARD_REQUIRED ON)