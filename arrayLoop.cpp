#include <iostream>
#include <string>

int main()
{

    std::string colors[5] = {"Amarillo", "Verde", "Rojo", "Violeta", "Azul"};

    for (int i = 0; i <= sizeof(colors) / sizeof(std::string); i++)
    {
        std::cout << colors[i] << "\n";
    }
    return 0;
}