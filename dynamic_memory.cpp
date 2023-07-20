#include <iostream>

int main()
{
    int *my_num = NULL;
    my_num = new int;
    *my_num = 34;

//También se puede hacer de la siguiente manera:

    int *my_other_num{new int{67}};

    std::cout << *my_other_num << '\n';
    delete my_other_num;
    nullptr;	

    std::cout << my_num << '\n';
    std::cout << *my_num << '\n';
    delete my_num;
    nullptr;
    return 0;
}

/*
Se asigna el valor al pointer que lo guardará en el heap  
*/