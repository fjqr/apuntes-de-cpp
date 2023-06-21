#include <iostream>

int main()
{

    int size;
    std::cout << "Size: " << '\n';
    std::cin >> size;
    int *myArray = new int[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Ingresa el número " << i + 1 << ": "  << '\n';
        std::cin >> myArray[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << myArray[i] << " ";
    }

    delete[] myArray;
    myArray = NULL;
    return 0;
}

/*
Con la palabra clave NEW, se solicita memoria para ubicar la nueva array
con la palabra DELETE, se elimina la memoria solicitada.
Luego se asigna NULL al arreglo para que no apunte a nada.
*/