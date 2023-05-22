#include <iostream>
#include <string>
using namespace std;

// clase sin constructor

class Car
{
public:
    string brand;
    string color;
    int year;
    void brake();
};

void Car::brake()
{
    cout << "The car stopped" << "\n";
}

int main()
{

    Car mustang;
    mustang.brand = "Ford";
    mustang.color = "red";
    mustang.year = 1967;

    cout << "Brand: " << mustang.brand << "\n";
    cout << "Color: " << mustang.color << "\n";
    cout << "Year: " << mustang.year << "\n";
    mustang.brake();
    return 0;
}