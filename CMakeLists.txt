cmake_minimum_required(VERSION 3.23)
project(Prosit_2_POO)

set(CMAKE_CXX_STANDARD 14)

include_directories("Prosit 2 Chiffrement")

add_executable(Prosit_2_POO
        "Prosit 2 Chiffrement/chiffrement.cpp"
        "Prosit 2 Chiffrement/chiffrement.h"
        "Prosit 2 Chiffrement/chiffrementCesar.cpp"
        "Prosit 2 Chiffrement/chiffrementCesar.h"
        "Prosit 2 Chiffrement/chiffrementXOR.cpp"
        "Prosit 2 Chiffrement/chiffrementXOR.h"
        "Prosit 2 Chiffrement/main.cpp")
