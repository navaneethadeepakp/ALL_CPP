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

    Fixed const c(10.5f);
    Fixed const d(2.0f);
    Fixed const neg(-5.25f);

    std::cout << "c (10.5) + d (2.0) = " << c + d << std::endl;
    std::cout << "c (10.5) - d (2.0) = " << c - d << std::endl;
    std::cout << "c (10.5) * d (2.0) = " << c * d << std::endl;
    std::cout << "c (10.5) / d (2.0) = " << c / d << std::endl;
    std::cout << "c (10.5) + neg (-5.25) = " << c + neg << std::endl;

    // std::cout << std::boolalpha;
    std::cout << "c (10.5) > d (2.0)  : " << (c > d) << std::endl;
    std::cout << "c (10.5) < d (2.0)  : " << (c < d) << std::endl;
    std::cout << "c (10.5) >= c (10.5): " << (c >= c) << std::endl;
    std::cout << "c (10.5) <= d (2.0) : " << (c <= d) << std::endl;
    std::cout << "c (10.5) == c (10.5): " << (c == c) << std::endl;
    std::cout << "c (10.5) != d (2.0) : " << (c != d) << std::endl;

    Fixed e(5.0f);
    std::cout << "Initial e: " << e << std::endl;
    std::cout << "--e      : " << --e  << std::endl;
    std::cout << "e        : " << e  << std::endl;
    std::cout << "e--      : " << e--  << std::endl;
    std::cout << "e        : " << e << std::endl;

    Fixed x(100);
    Fixed y(42);

    std::cout << "Non-const max(100, 42): " << Fixed::max(x, y) << std::endl;
    std::cout << "Non-const min(100, 42): " << Fixed::min(x, y) << std::endl;
    std::cout << "Const max(10.5, 2.0)  : " << Fixed::max(c, d) << std::endl;
    std::cout << "Const min(10.5, 2.0)  : " << Fixed::min(c, d) << std::endl;

    return 0;
}
