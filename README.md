# cpp_primer

Code from reading [C++ Primer, 5th Ed.](https://www.informit.com/store/c-plus-plus-primer-9780321714114)

## Notes

### Advice on Numerical Type Choice

C++, like C, is designed to let programs get close to the hardware when necessary.
The arithmetic types are defined to cater to the peculiarities of various kinds of hard-
ware. Accordingly, the number of arithmetic types in C++ can be bewildering. Most
programmers can (and should) ignore these complexities by restricting the types they
use. A few rules of thumb can be useful in deciding which type to use:

* Use an unsigned type when you know that the values cannot be negative.
* Use int for integer arithmetic. short is usually too small and, in practice, long
often has the same size as int. If your data values are larger than the minimum
guaranteed size of an int, then use long long.
* Do not use plain char or bool in arithmetic expressions. Use them only to hold
characters or truth values. Computations using char are especially problematic
because char is signed on some machines and unsigned on others. If you
need a tiny integer, explicitly specify either signed char or unsigned char.
* Use double for floating-point computations; float usually does not have
enough precision, and the cost of double-precision calculations versus single-
precision is negligible. In fact, on some machines, double-precision operations
are faster than single. The precision offered by long double usually is unnec-
essary and often entails considerable run-time cost.