#include <iostream>
#include "Fixed.hpp"

int main( void ) {

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << "\n========================================" << std::endl;
    std::cout << "       EXTRA TESTS & EDGE CASES         " << std::endl;
    std::cout << "========================================" << std::endl;

    // --- Arithmetic Tests ---
    std::cout << "\n--- Arithmetic Operators ---" << std::endl;
    Fixed const c(10.5f);
    Fixed const d(2.0f);
    Fixed const neg(-5.25f); // Edge case: Negative numbers

    std::cout << "c (10.5) + d (2.0) = " << c + d << std::endl;
    std::cout << "c (10.5) - d (2.0) = " << c - d << std::endl;
    std::cout << "c (10.5) * d (2.0) = " << c * d << std::endl;
    std::cout << "c (10.5) / d (2.0) = " << c / d << std::endl;
    std::cout << "c (10.5) + neg (-5.25) = " << c + neg << std::endl;

    // --- Comparison Tests ---
    // std::boolalpha forces the stream to print 'true'/'false' instead of '1'/'0'
    // std::cout << std::boolalpha;
    std::cout << "\n--- Comparison Operators ---" << std::endl;
    std::cout << "c (10.5) > d (2.0)  : " << (c > d) << " (Expected: true)" << std::endl;
    std::cout << "c (10.5) < d (2.0)  : " << (c < d) << " (Expected: false)" << std::endl;
    std::cout << "c (10.5) >= c (10.5): " << (c >= c) << " (Expected: true)" << std::endl;
    std::cout << "c (10.5) <= d (2.0) : " << (c <= d) << " (Expected: false)" << std::endl;
    std::cout << "c (10.5) == c (10.5): " << (c == c) << " (Expected: true)" << std::endl;
    std::cout << "c (10.5) != d (2.0) : " << (c != d) << " (Expected: true)" << std::endl;

    // --- Decrement Tests ---
    std::cout << "\n--- Decrement Operators ---" << std::endl;
    Fixed e(5.0f);
    std::cout << "Initial e: " << e << std::endl;
    std::cout << "--e      : " << --e << " (Expected: 4.99609)" << std::endl;
    std::cout << "e        : " << e << " (Expected: 4.99609)" << std::endl;
    std::cout << "e--      : " << e-- << " (Expected: 4.99609)" << std::endl;
    std::cout << "e        : " << e << " (Expected: 4.99219)" << std::endl;

    // --- Min / Max Tests ---
    std::cout << "\n--- Min / Max Functions ---" << std::endl;
    Fixed x(100);
    Fixed y(42);

    std::cout << "Non-const max(100, 42): " << Fixed::max(x, y) << std::endl;
    std::cout << "Non-const min(100, 42): " << Fixed::min(x, y) << std::endl;
    std::cout << "Const max(10.5, 2.0)  : " << Fixed::max(c, d) << std::endl;
    std::cout << "Const min(10.5, 2.0)  : " << Fixed::min(c, d) << std::endl;

    return 0;
}