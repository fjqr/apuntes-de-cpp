#include <iostream>
using namespace std;

// CALL BY VALUE: El parámetro no es modificado
int change(int num)
{
    num = 3;
    return num;
}

// CALL BY REERENCE: el valor original del parámetro puede ser modificado

int change_2(int &num)
{
    num = 3;
    return num;
}

int main()
{
    int para = 5;

    cout << change(para) << "\n";
    cout << change_2(para) << "\n";
    cout << para << "\n";

    // Cuando "&" se usa en una declaración, es un operador de referencia.
    // Cuando no es así, es un operador de dirección.
    cout << &para << "\n";

    return 0;
}