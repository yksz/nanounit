#include "nanounit.h"

static int test_fail(void)
{
    nu_fail();
    return 0;
}

static int test_assert_passed(void)
{
    nu_assert(0 == 0);
    return 0;
}

static int test_assert_failed(void)
{
    nu_assert(0 == 1);
    return 0;
}

static int test_assert_eq_int_passed(void)
{
    nu_assert_eq_int(0, 0);
    return 0;
}

static int test_assert_eq_int_failed(void)
{
    nu_assert_eq_int(0, 1);
    return 0;
}

static int test_assert_eq_float_passed(void)
{
    nu_assert_eq_float(1.0f, 0.9f, 0.15f);
    return 0;
}

static int test_assert_eq_float_failed(void)
{
    nu_assert_eq_float(1.0f, 0.8f, 0.15f);
    return 0;
}

static int test_assert_eq_ptr_passed(void)
{
    int x = 0;
    nu_assert_eq_ptr(&x, &x);
    return 0;
}

static int test_assert_eq_ptr_failed(void)
{
    int x = 0, y = 0;
    nu_assert_eq_ptr(&x, &y);
    return 0;
}

static int test_assert_eq_str_passed(void)
{
    nu_assert_eq_str("abc", "abc");
    return 0;
}

static int test_assert_eq_str_failed(void)
{
    nu_assert_eq_str("abc", "def");
    return 0;
}

int main(void)
{
    nu_run_test(test_fail);
    nu_run_test(test_assert_passed);
    nu_run_test(test_assert_failed);
    nu_run_test(test_assert_eq_int_passed);
    nu_run_test(test_assert_eq_int_failed);
    nu_run_test(test_assert_eq_float_passed);
    nu_run_test(test_assert_eq_float_failed);
    nu_run_test(test_assert_eq_ptr_passed);
    nu_run_test(test_assert_eq_ptr_failed);
    nu_run_test(test_assert_eq_str_passed);
    nu_run_test(test_assert_eq_str_failed);
    nu_report();
}
