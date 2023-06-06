#include <iostream>
#include <string>
// using namespace std;

int main()
{
    // string nombre = "Francisco";
    // cout << nombre.length();
    std::string nombre_completo;
    int edad;
    std::cout << "Indique su edad " << '\n';
    std::cin >> edad;
    std::cout << "Indique su nombre completo " << '\n';
    getline(std::cin >> std::ws, nombre_completo);
    std::cout << "Su nombre es: " << nombre_completo << '\n';
    std::cout << "Su edad es: " << edad << '\n';
    return 0;
}