# Define executable
set(EXE_NAME ${EXE_TEST})
set(EXE_SOURCES
    test.cpp
)
set(EXE_DEPENDENCIES
    ${LIB_CORE}
    ${LIB_COMPONENTS}
)

# Create executable
add_executable(${EXE_NAME} ${EXE_SOURCES})
target_link_libraries(${EXE_NAME} PRIVATE ${EXE_DEPENDENCIES})
