cmake_minimum_required(VERSION 3.20)
project(seascape VERSION 0.0.1 LANGUAGES CXX)

# Phase 1: Global settings

message(STATUS "Starting CMake...")

set(CXX_STANDARD_VERSION 20)

# Phase 2: Locate dependencies

# Phase 3: Include source tree

message(STATUS "Including source tree...")

set(ENTRY_POINT app/main.cpp)

# Phase 4: Include assets

# Makes `IMGDIR` available as a #define'd constant string literal in the source tree
# e.g., `auto file = SDL_RWFromFile(IMGDIR "grumpy-cat.bmp", "rb");`
# becomes `auto file = SDL_RWFromFile("./img/" "grumpy-cat.bmp", "rb");`
# and then the compiler concatenates these two adjacent strings
add_definitions(-DIMGDIR="./img/")

# Phase 5: Add Executable

add_executable(${PROJECT_NAME} ${ENTRY_POINT})

add_library(Lib "")

add_subdirectory(src)

set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD ${CXX_STANDARD_VERSION})

# Phase 6: Link dependencies to target

target_link_libraries(${PROJECT_NAME} PUBLIC Lib)