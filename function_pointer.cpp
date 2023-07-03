#include <iostream>

int returnFive(){
  return 5;
}

int suma(int a, int b){
  return a + b;
}

int main(){

  int (*fivePtr)() = returnFive;
  int (*sumaPtr)(int, int) = suma;

  std::cout << fivePtr() << '\n';
  std::cout << sumaPtr(4,5) << '\n';
  return 0;
}