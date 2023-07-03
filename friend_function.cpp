#include <iostream>
class Empleado
{
    std::string nombreCompleto;

public:
    void setNombreCompleto(std::string n, std::string a)
    {
        nombreCompleto = n + " " + a;
    }
    friend void printNombre(Empleado);
};

void printNombre(Empleado datos)
{

    std::cout << "Nombre completo: " << datos.nombreCompleto << '\n';
}

int main()
{
    Empleado empleado_1;
    empleado_1.setNombreCompleto("Francisco", "Quintero");
    printNombre(empleado_1);
    return 0;
}

/*
Las friend function tienen la capacidad de acceder a los atributos privados de un objeto.
*/