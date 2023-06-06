#include <iostream>
#include <string>

namespace first
{
    int my_number{45}; // otra manera de definir variables
}

namespace second
{
    int my_number{29};
}
int main()
{
    // using namespace second;
    std::cout << first::my_number << '\n';
    std::cout << second::my_number << '\n';
    return 0;
}
/*
Los namespaces permiten utilizar el mismo nombre de variable
con distintos valores y usarlos en el mismo scope
*/