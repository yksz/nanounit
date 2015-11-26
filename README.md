NanoUnit
=========

NanoUnit is a lightweight unit testing framework for C/C++.

NanoUnit is based on [MinUnit](http://www.jera.com/techinfo/jtns/jtn002.html).

## What is difference between NanoUnit and MinUnit?
#### 1. Output Result
NanoUnit provides more detailed test results.

```
test_fail ... FAILED
    sample.c:5: fail
test_assert_passed ... passed
test_assert_failed ... FAILED
    sample.c:17: fail
test_assert_eq_int_passed ... passed
test_assert_eq_int_failed ... FAILED
    sample.c:29: expected:'0', actual:'1'
test_assert_eq_float_passed ... passed
test_assert_eq_float_failed ... FAILED
    sample.c:41: expected:'1.000000', actual:'0.800000'
test_assert_eq_ptr_passed ... passed
test_assert_eq_ptr_failed ... FAILED
    sample.c:55: expected:'0x22caac', actual:'0x22caa8'
test_assert_eq_str_passed ... passed
test_assert_eq_str_failed ... FAILED
    sample.c:67: expected:'abc', actual:'def'

### sample.c, 11 tests, 6 failures
```

#### 2. Assertion Types
NanoUnit provides the following assertion types:
* nu_fail
* nu_assert
* nu_assert_eq_int
* nu_assert_eq_float
* nu_assert_eq_ptr
* nu_assert_eq_str

## License
The MIT license
