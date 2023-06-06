#include <iostream>

int buscar(std::string my_arr[], int size, std::string element);

int main()
{

    std::string cars[] = {"Mustang", "Camaro", "Charger", "Javelin"};
    int size = sizeof(cars) / sizeof(cars[0]);
    std::string elemento;

    std::cout << "Introduzca el elemento a buscar: " << '\n';
    std::getline(std::cin, elemento);

    int buscar_elemento = buscar(cars, size, elemento);

    if (buscar_elemento != -1)
    {
        std::cout << "El elemento se encuentra en el índice: " << buscar_elemento << '\n';
    }
    else
    {
        std::cout << "El elemento no se encuentra" << '\n';
    }
    return 0;
}

int buscar(std::string my_arr[], int size, std::string element)
{
    int index;

    for (int i = 0; i <= size; i++)
    {
        if (my_arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
