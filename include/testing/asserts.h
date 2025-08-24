bool fail();

bool assert_equal_int(int first, int second);

bool assert_equal_string(char * first, char * second);

#define assert_equal(T, U) _Generic(        \
    (T),                                    \
    int: _Generic(                          \
        (U),                                \
        int: assert_equal_int(T, U),        \
        default: fail()                     \
    ),                                      \
    char *: _Generic(                       \
        (U),                                \
        char *: assert_equal_string(T, U),  \
        default: fail()                     \
    ),                                      \
    default: fail()                         \
)