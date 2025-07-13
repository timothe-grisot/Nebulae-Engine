# Define library
set(LIB_NAME ${LIB_CORE})
set(LIB_SOURCES
    src/vector/ops/Vector2D.cpp
    src/vector/ops/Vector3D.cpp
    src/vector/Vector2D.cpp
    src/vector/Vector3D.cpp
    src/Object.cpp
)

# Create library
add_library(${LIB_NAME} ${LIB_SOURCES})
target_include_directories(${LIB_NAME} PUBLIC include/)
