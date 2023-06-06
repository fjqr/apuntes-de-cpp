#include <iostream>
#include <cmath>

int main()
{
    int lado_a;
    int lado_b;
    int lado_c;

    std::cout << "Ingrese el lado A " << '\n';
    std::cin >> lado_a;
    std::cout << "Ingrese el lado B " << '\n';
    std::cin >> lado_b;
    lado_c = sqrt(pow(lado_a, 2) + pow(lado_b, 2));
    std::cout << "Lado C: " << lado_c << '\n';
    return 0;
}