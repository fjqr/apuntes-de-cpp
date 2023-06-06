#include <iostream>
#include <ctime>

int main()
{

    srand(time(NULL));
    int num{rand()};
    int num2{rand()};
    int num3{rand()};

    std::cout << (num % 10) + 1 << '\n';
    std::cout << (num2 % 10) + 1 << '\n';
    std::cout << (num3 % 10) + 1 << '\n';
    return 0;
}

//Inicializar con time() garantiza darle un parámetro los más aleatorio posible a rand()