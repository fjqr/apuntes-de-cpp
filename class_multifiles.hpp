#include <string>
using namespace std;

class Car
{
    string model;
    string brand;

public:
    Car(string new_model, string new_brand);
    string get_model();
    string get_brand();
};