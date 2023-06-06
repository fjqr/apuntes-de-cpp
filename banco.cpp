#include <iostream>
#include <iomanip>

double ver_saldo(double num);
double depositar();
double retirar(double num);
void salir();

int main()
{
    int selec;
    double saldo{0};
    do
    {
        std::cout << "*********BANCO**********" << '\n';
        std::cout << "Seleccione la opción de su preferencia: " << '\n';
        std::cout << "1: Ver saldo" << '\n';
        std::cout << "2: Depositar" << '\n';
        std::cout << "3: Retirar" << '\n';
        std::cout << "4: Salir" << '\n';
        std::cin >> selec;

        std::cin.clear();
        fflush(stdin);

        switch (selec)
        {
        case 1:
            ver_saldo(saldo);
            break;
        case 2:
            saldo += depositar();
            ver_saldo(saldo);
            break;
        case 3:
            saldo -= retirar(saldo);
            ver_saldo(saldo);
            break;
        case 4:
            salir();
            break;
        default:
            std::cout << "Opción no valida" << '\n';
            break;
        }
    } while (selec != 4);
    return 0;
}

double ver_saldo(double num)
{
    std::cout << "Su saldo es: " << std::setprecision(2) << std::fixed << num << '\n';
    return num;
}
double depositar()
{
    double cantidad;
    std::cout << "Ingrese la cantidad que desea depositar en su cuenta" << '\n';
    std::cin >> cantidad;
    std::cout << "Transacción realizada con éxito" << '\n';

    if (cantidad > 0)
    {

        return cantidad;
    }
    else
    {
        std::cout << "No es una cantidad válida" << '\n';
        return 0;
    }
}
double retirar(double num)
{
    double cantidad;
    std::cout << "Ingrese la cantidad que desea retirar en su cuenta" << '\n';
    std::cin >> cantidad;
    if (cantidad <= num)
    {
        std::cout << "Transacción realizada con éxito" << '\n';
        return cantidad;
    }
    else if (cantidad < 0)
    {
        std::cout << "Cantidad no es válida" << '\n';
        return 0;
    }
    else
    {
        std::cout << "Transacción fallida: no dispone de saldo suficiente" << '\n';
        return 0;
    }
}

void salir()
{
    std::cout << "Gracias por usar nuestros servicios" << '\n';
}