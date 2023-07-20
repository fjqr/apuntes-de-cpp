#include <iostream>

int main(){

   size_t size{10};

//Se puede declarar dinámicamente (heap) un array de varias maneras:

    double *p_salaries {new double[size]}; //Inicializada con valores basura.

    int *p_students {new(std::nothrow) int[size]{}}; //Inicializada en 0;
    double *p_scores {new(std::nothrow) double[size]{1,2,3,4,5}}; //Inicializada parcialmente.
  return 0;

}