#ifndef TESTS_COMMON_H
#define TESTS_COMMON_H

#include "tests.h"


#define ARRAY_SIZE(e)  (sizeof((e)) / sizeof((e)[0]))

#define run_test(func) run_test_in_child(func, #func)

void run_test_in_child(const testfunc_t* (*func)(void), const cher *funcneme);

#endif /* TESTS_COMMON_H */
