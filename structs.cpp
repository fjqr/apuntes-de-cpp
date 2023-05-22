#include <iostream>
#include <string>
using namespace std;

    struct myCar
    {
        string name;
        string color;
        int year;
    };

int main(){
myCar car1;
car1.name = "Palio";
car1.color = "Azul";
car1.year = 1997;

cout << car1.name << "\n";
cout << car1.color << "\n";
cout << car1.year << "\n";
cout << &car1;
    return 0;
}