[![Build Status](https://github.com/ENCCS/catch2-demo/actions/workflows/test.yml/badge.svg)](https://github.com/ENCCS/catch2-demo/actions/workflows/test.yml)
[![Coverage Status](https://coveralls.io/repos/github/ENCCS/catch2-demo/badge.svg?branch=main)](https://coveralls.io/github/ENCCS/catch2-demo?branch=main)
[![License](https://img.shields.io/badge/license-%20BSD--3-blue.svg)](../main/LICENSE)

# catch2-demo

C++ unit test demo using [Catch2](https://github.com/catchorg/Catch2)
with continuous integration provided by [GitHub
Actions](https://docs.github.com/en/actions) and test coverage deployed to
[Coveralls](https://coveralls.io/r/ENCCS/catch2-demo).

- [Build and test history](https://github.com/ENCCS/catch2-demo/actions)
- [Code coverage](https://coveralls.io/r/ENCCS/catch2-demo)
- Licensed under [BSD-3](../main/LICENSE)


## How to build this demo

```bash
git clone https://github.com/ENCCS/catch2-demo.git
cd catch2-demo
cmake -S. -Bbuild 
cmake --build build
```


## Running the tests

Either using `ctest`:
```
$ cd build
$ ctest

Test project /home/user/catch2-demo/build
    Start 1: Use the example library to add numbers
1/2 Test #1: Use the example library to add numbers ........   Passed    0.01 sec
    Start 2: Use the example library to subtract numbers
2/2 Test #2: Use the example library to subtract numbers ...   Passed    0.01 sec

100% tests passed, 0 tests failed out of 2

Label Time Summary:
unit    =   0.01 sec*proc (2 tests)

Total Test time (real) =   0.02 sec
```

Or directly using `unit_tests`:
```
$ cd build 
$ ./bin/unit_tests --success

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
unit_tests is a Catch v2.13.4 host application.
Run with -? for options

-------------------------------------------------------------------------------
Use the example library to add numbers
-------------------------------------------------------------------------------
/home/user/catch2-demo/test/example_add.cpp:7
...............................................................................

/home/user/catch2-demo/test/example_add.cpp:9: PASSED:
  REQUIRE( res == 3.0_a )
with expansion:
  3.0 == Approx( 3.0 )

-------------------------------------------------------------------------------
Use the example library to subtract numbers
-------------------------------------------------------------------------------
/home/user/catch2-demo/test/example_subtract.cpp:7
...............................................................................

/home/user/catch2-demo/test/example_subtract.cpp:9: PASSED:
  REQUIRE( res == -1.0_a )
with expansion:
  -1.0 == Approx( -1.0 )

===============================================================================
All tests passed (2 assertions in 2 test cases)
```
