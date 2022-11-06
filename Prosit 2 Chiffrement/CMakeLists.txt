cmake_minimum_required(VERSION 3.23)
project(Prosit_2_Chiffrement)

set(CMAKE_CXX_STANDARD 14)

add_executable(Prosit_2_Chiffrement main.cpp chiffrementXOR.cpp chiffrementXOR.h chiffrementCesar.cpp chiffrementCesar.h chiffrement.cpp chiffrement.h)
