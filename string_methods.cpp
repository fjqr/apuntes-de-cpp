#include <iostream>
#include <string>

int main()
{
    std::string my_name{"Francisco"};
    std::string my_lastname{"Quintero"};
    

    std::cout << my_name.length() << '\n';          // Devuelve la longitud de la cadena.
    std::cout << my_name.empty() << '\n';           // Devuelve true si la cadena está vacía.
    //std::cout << my_name.clear() << '\n';           // Devuelve una cadena vacía.
    std::cout << my_name.append("Mick") << '\n';    // Inserta una cadema al final.
    std::cout << my_name.at(0) << '\n';             // Devuelve el caracter encontrado en el índice dado.
    std::cout << my_name.insert(2, "Hola") << '\n'; // Inserta una cadena en el índice dado.
    std::cout << my_name.find('i') << '\n';         // Devuelve el índice donde se encuentra el caracter dado.
    std::cout << my_name.erase(0, 3) << '\n';       // Borra los caracteres encontrado en el rango dado.
    
    return 0;
}