#include <iostream>

int main()
{

    std::string cars[] = {"Camaro", "Mustang", "Charger", "Malibu"};

    for (std::string car : cars)
    {
        std::cout << car << '\n';
    }
    return 0;
}