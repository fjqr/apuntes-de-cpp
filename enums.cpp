#include <iostream>

enum Days {
     domingo = 1,
     lunes = 2,
     martes = 3,
     miercoles = 4,
     jueves = 5,
     viernes = 6,
     sabado = 7
};

int main(){

    Days day = martes;

    switch(day){
       case 1: std::cout << "Es domingo" << '\n';
       break;
       case 2: std::cout << "Es lunes" << '\n';
       break;
       case 3: std::cout << "Es martes" << '\n';
       break;
       case 4: std::cout << "Es miércoles" << '\n';
       break;
       case 5: std::cout << "Es jueves" << '\n';
       break;
       case 6: std::cout << "Es viernes" << '\n';
       break;
       case 7: std::cout << "Es sábado" << '\n';
       break;
    } 
     return 0;
}