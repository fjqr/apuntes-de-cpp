#include <iostream>
#include <string>
#include "functions_overloaded.hpp"
using namespace std;

int main()
{
    cout << using_plus_sign(44, 22) << "\n";
    cout << using_plus_sign("Hola, ", "mundo.") << "\n";
    return 0;
}

//las funciones overloaded se utilizan cuando creamos varias funciones
//que hacen casi lo mismo.