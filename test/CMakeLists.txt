cmake_minimum_required(VERSION 3.16)

# Path to the Components
set(EXTRA_COMPONENT_DIRS "../components")

# Components to be tested
# set(
#     TEST_COMPONENTS "arthematics"
#     CACHE STRING "List of Components to test"
# )
set(
    TEST_COMPONENTS 
        "arthematics" "gpios"
)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(esp_idf_unit_testing_test)