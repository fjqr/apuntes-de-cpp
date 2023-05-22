#include <iostream>
#include <string>
using namespace std;

int sum(int num_a, int num_b)
{
    return num_a + num_b;
}

int min(int num_a, int num_b)
{
    return num_a - num_b;
}

double division(double num_a, double num_b)
{
    double result;
    if (num_a > 0 && num_b > 0)
    {
        result = num_a / num_b;
    }
    else
    {
        result = 0.00;
    }
    return result;
}

int mult(int num_a, int num_b)
{
    return num_a * num_b;
}

int main()
{
    int num_a, num_b, eleccion, seguir;

    do
    {

        cout << "Por favor, ingrese el primer número para la operación"
             << "\n";
        cin >> num_a;
        cout << "Por favor, ingrese el segundo número para la operación"
             << "\n";
        cin >> num_b;
        cout << "¿Qué operación desea realizar?"
             << "\n";
        cout << "Ingrese el número que corresponda a su elección: "
             << "\n";
        cout << "1: sumar, 2: restar, 3: multiplicar, 4: dividir"
             << "\n";
        cin >> eleccion;

        switch (eleccion)
        {
        case 1:
            cout << "Resultado: " << sum(num_a, num_b) << "\n";
            break;
        case 2:
            cout << "Resultado: " << min(num_a, num_b) << "\n";
            break;
        case 3:
            cout << "Resultado: " << mult(num_a, num_b) << "\n";
            break;
        case 4:
            cout << "Resultado: " << division(num_a, num_b) << "\n";
            break;

        default:
            cout << "No fue posible realizar la operación."
                 << "\n";
            break;
        }

        cout << "¿Desea hacer otra operación? "
             << "\n";
        cout << "1: Sí, 2: No"
             << "\n";
        cin >> seguir;

        if (seguir == 2)
        {
            break;
        }
    } while (seguir == 1);
    return 0;
}
