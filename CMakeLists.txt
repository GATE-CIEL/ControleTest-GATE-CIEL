# Version minimale de CMake requise
cmake_minimum_required(VERSION 3.16)

# Nom du projet
project(ControleTest)

# Utilisation de la norme C++17
set(CMAKE_CXX_STANDARD 17)
# En plus ?
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Ajouter les tests
add_subdirectory(tests)

# Ajouter les fichiers sources principaux
add_library(my_functions STATIC Fct.cpp)  # Créer une bibliothèque statique avec Fct.cpp

