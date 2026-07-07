cmake_minimum_required(VERSION 3.24)

project(RayLibTemplateCPP LANGUAGES CXX)

add_executable(Template-Project-Raylib-CPP-VSCode
    src/main.cpp
)

target_compile_features(Template-Project-Raylib-CPP-VSCode PRIVATE cxx_std_20)

target_compile_options(Template-Project-Raylib-CPP-VSCode PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)

set(RAYLIB_ROOT "C:/raylib/raylib" CACHE PATH "Path to raylib root")
set(RAYLIB_INCLUDE_DIR "${RAYLIB_ROOT}/src")
set(RAYLIB_LIBRARY "${RAYLIB_ROOT}/src/libraylib.a")

target_include_directories(Template-Project-Raylib-CPP-VSCode SYSTEM PRIVATE
    "${RAYLIB_INCLUDE_DIR}"
)

target_link_libraries(Template-Project-Raylib-CPP-VSCode PRIVATE
    "${RAYLIB_LIBRARY}"
    opengl32
    gdi32
    winmm
)