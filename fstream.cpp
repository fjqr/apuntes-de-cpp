#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    // Crea un archivo
    ofstream MiArchivo("fjqr.txt");

    // Escribir en el archivo
    MiArchivo << "Esto es una prueba de C++";

    // Cerrar el archivo por buenas costumbres
    MiArchivo.close();

    // Crear una variable para leer el archivo
    string leerArchivo;

    // Método para leer archivos
    // También se puede usar fstream
    ifstream LeerMiArchivo("fjqr.txt");

    // Método getline lee el archivo. Pertenece a ifstream
    while (getline(LeerMiArchivo, leerArchivo))
    {
        cout << leerArchivo;
    }

    LeerMiArchivo.close();

    return 0;
}