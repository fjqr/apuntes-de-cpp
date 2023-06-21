#include <iostream>

void print(void *ptr, char type)
{
    /*
    Primero se convierte el void pointer en el tipo indicado
    luego se hace dereference de ptr para imprimir el valor
    */
    switch (type)
    {
    case 'i':
        std::cout << *((int *)ptr) << '\n';
        break;
    case 'f':
        std::cout << *((char *)ptr) << '\n';
        break;
    }
}
int main()
{
    int num = 5;
    char ch = 'f';

    print(&num, 'i');
    print(&ch, 'f');
    return 0;
}