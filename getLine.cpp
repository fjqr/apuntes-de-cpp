#include <iostream>
#include <string>
// using namespace std;

int main()
{
    // string nombre = "Francisco";
    // cout << nombre.length();
    std::string nombre_completo;
    std::cout << "Indique su nombre completo ";
    getline(std::cin, nombre_completo);
    std::cout << "Su nombre es: " << nombre_completo;
    return 0;
}