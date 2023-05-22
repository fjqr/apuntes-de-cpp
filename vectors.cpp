//Vectores

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    vector<string> equipos = {"Real Madrid", "Barcelona", "Valencia", "Villareal"};
    cout << equipos.size() << "\n";
    equipos.pop_back();
    equipos.push_back("Atlético de Madrid"); 
    cout << equipos[2] << "\n";
    return 0;
}