cmake_minimum_required(VERSION 3.16)

project(coolpattern)

add_executable(coolpattern coolpattern.cc)

install(TARGETS coolpattern)

enable_testing()
add_test(NAME coolpattern COMMAND coolpattern)
