#include <iostream>
#include <string>
using namespace std;

// Herencia se refiere a que una clase puede heredar atributos o
// métodos de una clase base, evitando la repetición de código.
// La herencia también se puede dar en múltiples niveles.

//También, una clase puede heredar de dos clases distintas.

class Phone
{
public:
    string brand = "Samsung";
    void ring()
    {
        cout << "Riiiing"
             << "\n";
    }
};

class Mobile : public Phone
{
public:
    string model = "A54";
};

class Device
{
    void messageTone()
    {
        cout << "Turururu tururutu tuuu"
             << "\n";
    }
};

class Telephone : public Phone, public Device
{
    public:
    void vibration()
    {
        cout << "ZZZZZ"
             << "\n";
    }
};

int main()
{
    Mobile myTelf;
    Telephone myTelf2;
    myTelf.ring();
    myTelf2.ring();
    myTelf2.vibration();
    cout << myTelf.brand << " " << myTelf.model << "\n";
    return 0;
}