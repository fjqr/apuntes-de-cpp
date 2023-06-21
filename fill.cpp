#include <iostream>

int main()
{
    std::string fast_food[99];
    fill(fast_food, fast_food + (99 / 3), "Hamburguesa");
    fill(fast_food + (99 / 3), fast_food + (99 / 3) * 2, "Pizza");
    fill(fast_food + (99 / 3) * 2, fast_food + 99, "Perro Caliente");

    for (std::string food : fast_food)
    {
        std::cout << food << '\n';
    }
    return 0;
}