#include <iostream>
#include <string>
#include "function_headers.hpp"
using namespace std;

int main(){
    print_greeting("Francisco");
    return  0;
}

//Cuando la aplicación va creciendo, se definen las funciones en otro
//archivo .cpp. Luego, estas se declaran en el archivo .hpp (header)
//para luego ejecutarse en el archivo cpp principal (main).