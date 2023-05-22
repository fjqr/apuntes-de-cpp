#include <iostream>
#include <string>
using namespace std;

//Las funciones en línea copian el cuerpo de la función  y la colocan en
//el lugar donde se llaman a esas funciones.
//Esto se hace para mejorar el rendimiento, ya que c++ asigna una dirección
//en memoria para cada función

class Calculator
{
public:
    int sum(int num_a, int num_b);
};

inline int Calculator::sum(int num_a, int num_b)
{
    return num_a + num_b;
}

int main()
{
    Calculator my_Calculator;
    cout << my_Calculator.sum(23, 54) << "\n";
    return 0;
}