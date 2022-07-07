cmake_minimum_required(VERSION 3.22)
project(Compiler)

set(CMAKE_CXX_STANDARD 14)

add_executable(Compiler
        Lexer/Errors.cpp Lexer/Errors.h Shell.cpp Shell.h main.cpp Lexer/Lexer.cpp Lexer/Lexer.h Lexer/Token.cpp Lexer/Token.h)
