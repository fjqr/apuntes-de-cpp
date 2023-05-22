#include <iostream>
#include <string>
using namespace std;


//Encapsulaado: técnica para restringir el acceso a ciertos atributos o
//métodos. Se usa set para asignar valor al atributo privado y set para
// leerlo

class Company {

    private:
    int capital;
    public:
    string name;
    string president;
    void setCapital(int c){
        capital = c;
    }
    int getCapital(){
        return capital;
    }
    
    Company(string n, string p);
};

Company::Company(string n, string p){
    name = n;
    president = p;
}

int main(){
    Company company1("Tesla", "Elon Musk");
    company1.setCapital(100000000);

    cout << "Company: " << company1.name << "\n";
    cout << "President: " << company1.president << "\n";
    cout << "Capital: " << company1.getCapital() << "\n";
    return 0;
}