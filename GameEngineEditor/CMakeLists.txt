cmake_minimum_required(VERSION 3.12)
set(EDITOR_PROJECT_NAME GameEngineEditor)

add_executable(${EDITOR_PROJECT_NAME}
src/main.cpp
)

target_link_libraries(${EDITOR_PROJECT_NAME} GameEngineCore)

target_include_directories(${EDITOR_PROJECT_NAME} PUBLIC includes)
target_compile_features(${EDITOR_PROJECT_NAME} PUBLIC cxx_std_17)

set_target_properties(${EDITOR_PROJECT_NAME} PROPERTIES RUNTIME_OUT_DIRECTORY ${CMAKE_COMPILER_DIR}/bin/)

