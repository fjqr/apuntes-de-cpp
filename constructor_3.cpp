#include<iostream>

//Clase con varios constructores

class Pizza{
public:
std::string topping_1;
std::string topping_2;

Pizza(){}

Pizza(std::string topping_1){
this->topping_1 = topping_1;
}

Pizza(std::string topping_1, std::string topping_2){
this->topping_1 = topping_1;
this->topping_2 = topping_2;
}
};

int main(){

Pizza pizza_1;
Pizza pizza_2("Anchoas");
Pizza pizza_3("Maiz", "Salchichón");

std::cout << pizza_2.topping_1 << '\n';
std::cout << pizza_3.topping_2 << '\n';
     return 0;
}