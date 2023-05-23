#include <iostream>
#include <string>
#include "class_multifiles.hpp"
using namespace std;

int main()
{
    Car mustang("Mustang", "Ford");
    cout << mustang.get_brand() << "\n";
    cout << mustang.get_model() << "\n";
    return 0;
}
