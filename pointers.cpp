#include <iostream>
using namespace std;

int main()
{
    int the_num = 8;        // Valor original
    int* my_num = &the_num; // Pointer a la dirección en la memoria donde está guardada the_num
    int again = *my_num;    // Aquí (*) hace dereference y se usa para ver el valor guardado en la dirección de la memoria

    int* np = nullptr;     // Null pointer se usa para inicializar un pointer por razones de seguridad.

    cout << the_num << "\n";
    cout << my_num << "\n";
    cout << again << "\n";
    return 0;
}

// Cuando (*) se encuentra en una declaración, es un pointer
// Cuando no es asi, es un operador de dereference