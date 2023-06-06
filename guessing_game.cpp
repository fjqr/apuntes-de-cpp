#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));
    int rand_number{((rand() % 100) + 1)};
    int guess;

    std::cout << "++++++ ADIVINA EL NÚMERO ++++++" << '\n';

    do
    {
        std::cout << "Por favor, ingresa un número del 1 al 100" << '\n';
        std::cin >> guess;
        if (guess > rand_number)
        {
            std::cout << "El número que escogiste es muy alto " << '\n';
        }
        else if (guess < rand_number)
        {
            std::cout << "El número que escogiste es muy bajo " << '\n';
        }
        else
        {
            std::cout << "¡ACERTASTE! " << '\n';
            break;
        }

    } while (guess != rand_number);

    std::cout << "++++++ FIN ++++++" << '\n';

    return 0;
}