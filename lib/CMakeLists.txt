add_library(audirio SHARED
    src/audirio.cpp
)

target_include_directories(audirio PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_compile_definitions(audirio PRIVATE AUDIRIO_EXPORTS)
