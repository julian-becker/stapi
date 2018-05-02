cmake_minimum_required(VERSION 3.5)
project(stapiapp LANGUAGES CXX)

find_package(libstapi REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_14)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    libstapi::libstapi
)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
