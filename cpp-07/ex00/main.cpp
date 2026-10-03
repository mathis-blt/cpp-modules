#include "whatever.hpp"
#include <iostream>

// this exercice introduce the template notion where the variable type is unknowned,
// but as long as you manipulate the same ones everything should work perfectly fine.

int main( void )
{
	std::cout << GREYBG << "  --- 𝕴nt test ---  " << STD << std::endl << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << BLUE << "a = " << a << ", b = " << b << STD << std::endl;
	std::cout << BLUE << "min( a, b ) = " << ::min( a, b ) << STD << std::endl;
	std::cout << BLUE << "max( a, b ) = " << ::max( a, b ) << STD << std::endl;

	std::cout << std::endl << GREYBG << "  --- 𝕾tr test ---  " << STD << std::endl << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << PINK << "c = " << c << ", d = " << d << STD << std::endl;
	std::cout << PINK << "min( c, d ) = " << ::min( c, d ) << STD << std::endl;
	std::cout << PINK << "max( c, d ) = " << ::max( c, d ) << STD << std::endl;

	std::cout << std::endl << GREYBG << " --- 𝕱loat test --- " << STD << std::endl << std::endl;
    float e = 42.42f;
    float f = 21.21f;
    ::swap(e, f);
    std::cout << GREEN << "e = " << e << ", f = " << f << STD << std::endl;
    std::cout << GREEN << "min( e, f ) = " << ::min( e, f ) << STD << std::endl;
    std::cout << GREEN << "max( e, f ) = " << ::max( e, f ) << STD << std::endl;

    std::cout << std::endl << GREYBG << " --- 𝕮har test ---  " << STD << std::endl << std::endl;
    char g = 'a';
    char h = 'z';
    ::swap(g, h);
    std::cout << VIOLET << "g = " << g << ", h = " << h << STD << std::endl;
    std::cout << VIOLET << "min( g, h ) = " << ::min( g, h ) << STD << std::endl;
    std::cout << VIOLET << "max( g, h ) = " << ::max( g, h ) << STD << std::endl;

    std::cout << std::endl << GREYBG << " --- 𝕷ong test ---  " << STD << std::endl << std::endl;
    long i = 1234567890L;
    long j = 9876543210L;
    ::swap(i, j);
    std::cout << ORANGE << "i = " << i << ", j = " << j << STD << std::endl;
    std::cout << ORANGE << "min( i, j ) = " << ::min( i, j ) << STD << std::endl;
    std::cout << ORANGE << "max( i, j ) = " << ::max( i, j ) << STD << std::endl;
	return 0;
}
