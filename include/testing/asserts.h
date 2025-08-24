bool fail();

bool assert_equal_int(int first, int second);

#define assert_equal(T, U) _Generic(    \
    (T),                                \
    int: _Generic(                      \
        (U),                            \
        int: assert_equal_int(T, U),    \
        default: fail()                 \
    ),                                  \
    default: fail()                     \
)