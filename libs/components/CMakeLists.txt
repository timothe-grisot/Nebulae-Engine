# Define library
set(LIB_NAME ${LIB_COMPONENTS})
set(LIB_SOURCES
    src/Transform.cpp
)
set(LIB_DEPENDENCIES_PUBLIC
    ${LIB_CORE}
)

# Create library
add_library(${LIB_NAME} ${LIB_SOURCES})
target_link_libraries(${LIB_NAME} PUBLIC ${LIB_DEPENDENCIES_PUBLIC})
target_include_directories(${LIB_NAME} PUBLIC include/)
