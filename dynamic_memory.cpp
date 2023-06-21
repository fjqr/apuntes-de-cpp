#include <iostream>

int main()
{
    int *my_num = NULL;
    my_num = new int;
    *my_num = 34;

    std::cout << my_num << '\n';
    std::cout << *my_num << '\n';
    delete my_num;
    return 0;
}

/*
Se asigna el valor al pointer que lo guardará en el heap  
*/