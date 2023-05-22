#include <iostream>
#include <string>
using namespace std;

// Access specifiers: public, private, protected.
//  Protected es similar a private, con la diferencia que los atributos
//  se pueden heredar

class Empleado
{
protected:
    int salario;
};

class Programador : public Empleado
{
public:
    int bono;
    void setSalario(int s)
    {
        salario = s;
    }
    int getSalario()
    {
        return salario;
    }
};

int main()
{
    Programador miPerfil;
    miPerfil.setSalario(1000);
    miPerfil.bono = 1500;

    cout << "Salario: " << miPerfil.getSalario() << "\n";
    cout << "Bono: " << miPerfil.bono << "\n";
    return 0;
}