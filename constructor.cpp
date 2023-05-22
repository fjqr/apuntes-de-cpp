#include <iostream>
#include <string>
using namespace std;

//Clase con constructor

class Dog
{
public:
    string breed;
    string name;
    int age;
    Dog(string b, string n, int a);
};

//Constructor (Se puede declarar tanto dentro como fuera de la clase)

Dog::Dog(string b, string n, int a)
{
    breed = b;
    name = n;
    age = a;
};

int main()
{

    Dog dog1("Pitbull", "Bob", 6);

    cout << "Breed: " << dog1.breed << "\n";
    cout << "Name: " << dog1.name << "\n";
    cout << "Age: " << dog1.age << "\n";
    return 0;
}