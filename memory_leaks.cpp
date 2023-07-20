#include<iostream>

int main(){

int *my_num{new int{45}};

std::cout << *my_num << '\n';

//delete my_num;
//my_num = nullptr;

//Si no se resetea el pointer, es decir, si no se libera la memoria usada se puede
//generar un memory leak si se intenta usar el mismo espacio.

my_num = new int{989};

//al tratar de liberar la memoria usada, solo se libera la última (989) pero la anterior
//seguirá siendo ocupada por el programa.

return 0;
}