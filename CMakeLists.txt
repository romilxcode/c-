cmake_minimum_required(VERSION 4.0)
project(c_plus)

set(CMAKE_CXX_STANDARD 20)

add_executable(c_plus main.cpp
        src/pointers/pointers.cpp
        src/pointers/pointer.h
        src/functions/functions.cpp
        src/functions/functions.h
        src/class/class.cpp
        src/class/class.h
        src/conditionalandloops/conditionalandloops.cpp
        src/conditionalandloops/conditionalandloops.h
        src/operators/operators.cpp
        src/operators/operators.h
        src/patterns/patterns.cpp
        src/patterns/patterns.h
        src/typecasting/typecasting.cpp
        src/typecasting/typecasting.h
        src/variableanddatatypes/variableanddatatypes.cpp
        src/variableanddatatypes/variableanddatatypes.h
)
