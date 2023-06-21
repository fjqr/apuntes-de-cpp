#include <iostream>

int factorial(int num);
int main()
{
    // int input_number;
    // std::cout << "Ingrese el número: " << '\n';
    // std::cin >> input_number;
    std::cout << factorial(10) << '\n';
    return 0;
}

int factorial(int num)
{
    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}