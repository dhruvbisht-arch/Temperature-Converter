cmake_minimum_required(VERSION 3.20)

project("Temperature Conversion" LANGUAGES C)

set(CMAKE_C_STANDARD 11)

add_executable(Temperature
    main.c
    functions.c
)