#include<iostream>
#include<string>
using namespace std;

int main(){

    string colors[5] = {"Amarillo","Verde", "Rojo", "Violeta", "Azul"};

    for(int i = 0; i <= sizeof(colors) / sizeof(int); i++){
        cout << colors[i] << "\n";
    }
    return 0;
}