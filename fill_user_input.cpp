#include <iostream>

int main()
{
    std::string food[5];
    int size = sizeof(food) / sizeof(food[0]);
    std::string temp;

    for (int i = 0; i < size; i++)
    {
        std::cout << "Ingrese su elección o 'q' para salir: " << i + 1 << '\n';
        std::getline(std::cin, temp);
        if (temp == "q")
        {
            break;
        }
        else
        {
            food[i] = temp;
        }
    }

    for (int i = 0; !food[i].empty(); i++)
    {
        std::cout << food[i] << '\n';
    }

    return 0;
}