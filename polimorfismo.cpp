#include <iostream>
#include <string>
using namespace std;

// Polimorfismo se refiere a que los métodos o atributos heredados
// pueden usarse de distintas formas, dependiendo de la clase que los
// hereda.

class Animal
{
public:
    void sonidos()
    {
        cout << "Sonidos de animales"
             << "\n";
    }
};

class Cochino : public Animal
{
public:
    void sonidos()
    {
        cout << "Oink, oink"
             << "\n";
    }
};

class Perro : public Animal
{
public:
    void sonidos()
    {
        cout << "guau, guau"
             << "\n";
    }
};

int main()
{

    Animal myAnimal;
    Cochino myCochino;
    Perro myPerro;

    myAnimal.sonidos();
    myCochino.sonidos();
    myPerro.sonidos();
    return 0;
}