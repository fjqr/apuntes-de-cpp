#include <iostream>
#include <ios>
#include <iomanip>

int main()
{

    //std::cout << "¡Hola, Mundo!" << std::flush; //guarda los datos en un buffer

    std::cout << "-----------------------" << '\n';
    // //std::setw() configura el ancho en caracteres.  Se le puede pasar una variable como parámetro.
    // std::cout << std::left; //Justifica el texto a la izquierda.
    // std::cout << std::setw(10) << "Nombre" << std::setw(10) << "Apellido" << '\n';
    // std::cout << std::setw(10) << "Francisco" << std::setw(10) << "Quintero" << '\n';
    // std::cout << std::setw(10) << "Emilio" << std::setw(10) << "Quintero" << '\n';
    // std::cout << std::setw(10) << "Carlos" << std::setw(10) << "Quintero" << '\n';
    // std::cout << std::setw(10) << "Arantxa" << std::setw(10) << "Quintero" << '\n';
    std::cout << "-----------------------" << '\n';
    
    std::cout << std::left;
    std::cout << std::setfill('*'); //Rellena espacios en blanco con el caracter indicado
    std::cout << std::setw(10) << "Datos 1" << std::setw(10) << "Datos 2" << '\n'; //Justifica el símbolo - a la izquierda y la cifra a la derecha
    std::cout << std::internal;
    std::cout << std::setw(10) << -456 << std::setw(10) << -7895 <<'\n';
    std::cout << std::showpos; //Muestra el símbolo + de los números positivos. El contrario sería std::noshowpos
    std::cout << std::setw(10) << 7548 << std::setw(10) << 354 <<'\n';
    std::cout << "-----------------------" << '\n';
    std::cout << std::boolalpha; // muestra los valores de tipo bool como true o false y no como 0 o 1. Su contrario es std::noboolalpha
    std::cout << true <<'\n';

    int my_num{4654};

    std::cout << std::dec << my_num << '\n';
    std::cout << std::oct << my_num << '\n';
    std::cout << std::hex << my_num << '\n';

    auto my_fl{4.123546854};
    std::cout << std::setprecision(3);
    std::cout << std::hex << my_fl << '\n';

                 
    
    return 0;
}