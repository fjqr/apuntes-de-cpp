#include <iostream>
#include <string>

int main()
{

    std::string colors[5] = {"Amarillo", "Verde", "Rojo", "Violeta", "Azul"};

//En lugar de sizeof(colors) / sizeof(std::string) se puede usar también std::size(colors)

    for (int i = 0; i <= sizeof(colors) / sizeof(std::string); i++)
    {
        std::cout << colors[i] << "\n";
    }
    return 0;
}