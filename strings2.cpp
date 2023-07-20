#include<iostream>
#include<string>

int main(){

    std::string country; //String vacío
    std::string planet{"Venus es verde"};//String literal
    std::string prefered_planet{planet};
    std::string mensaje{"Hola a todos", 5};//Muestra solo el texto: Hola
    std::string msn_weird(4, 'x');//Muestra múltiples copias de un carácter
    std::string full_name{"Francisco Quintero"};
    std::string last_name{full_name,10,8}; //Muestra solo 8 caracteres desde el carácter del puesto 10

    std::cout << planet << '\n';
    std::cout << prefered_planet << '\n';
    std::cout << mensaje << '\n';
    std::cout << msn_weird << '\n';
    std::cout << full_name << '\n';
    std::cout << last_name << '\n';
   return 0;
}