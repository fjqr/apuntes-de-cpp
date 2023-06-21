#include <iostream>
#include <string>

//Clase con constructor

class Dog
{
public:
    std::string breed;
    std::string name;
    int age;

//Constructor:

    Dog(std::string breed, std::string name, int age)
{
    this->breed = breed;
    this->name = name;
    this->age = age;
}
};

int main()
{

    Dog dog1("Pitbull", "Bob", 6);

    std::cout << "Breed: " << dog1.breed << "\n";
    std::cout << "Name: " << dog1.name << "\n";
    std::cout << "Age: " << dog1.age << "\n";
    return 0;
}