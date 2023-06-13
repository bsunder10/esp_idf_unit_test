idf_component_register(
    SRCS 
        "test_gpios.c"
    INCLUDE_DIRS 
        "."
    REQUIRES
        cmock unity gpios 
)