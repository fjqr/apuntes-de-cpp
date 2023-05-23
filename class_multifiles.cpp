#include <string>
#include "class_multifiles.hpp"
using namespace std;

Car::Car(string new_model, string new_brand)
{
    model = new_model;
    brand = new_brand;
};

string Car::get_model()
{
    return model;
}

string Car::get_brand()
{
    return brand;
}