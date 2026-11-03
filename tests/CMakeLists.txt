# Télécharger et configurer GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.11.0  # Remplace par la dernière version stable
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Créer un exécutable pour les tests
add_executable(runTests tests.cpp)

# Lier GoogleTest et la bibliothèque my_functions aux tests
target_link_libraries(runTests gtest_main my_functions)

# Ajouter des tests
add_test(NAME runTests COMMAND runTests)
