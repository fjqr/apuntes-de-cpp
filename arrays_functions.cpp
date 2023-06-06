#include <iostream>

double get_total(double prices[], int size);

int main()
{
    double prices[] = {4.45, 3.67, 565.65};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = get_total(prices, size);

    std::cout << "Total: " << total << '\n';
    return 0;
}

double get_total(double prices[], int size)
{
    double total = 0;

    for (int i = 0; i <= size; i++)
    {
        total += prices[i];
    }
    return total;
}

//Se le puede pasar a la función el tamaño del array para que pueda iterarlo
//Esto se debe a que está trabajando con el pointer del array y no sabe
//cuán grande es.