#include<iostream>
#include<string>
#include "functions_templates.hpp"
using namespace std;

int main(){
    cout << sum(23.34, 456.33) << "\n";
    cout << sum(456,3215) << "\n";
    return 0;
}

//Templates son plantillas de funciones que nos permiten
//trabajar con varios tipos de datos con la misma función.