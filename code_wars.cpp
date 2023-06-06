#include <iostream>
#include <string>
using namespace std;

string dna_to_rna(string dna)
{
    for (int i = 0; i <= dna.size() - 1; i++)
    {

        if (dna[i] == 'T')
        {
            dna[i] = 'U';
        }
    }
    return dna;
}

int main()
{
    cout << dna_to_rna("GCATGCAAGTATCCGACTT") << "\n";

    return 0;
}

//string.find("some") busca la primera aparición de la cadena indicada
// y devuleve su índice. con string::npos se maneja el índice cuando no
//encuentra la cadena indicada.
// string.replace(strin.begin(), string.end(), "viejo","nuevo")
// reemplaza el string viejo por el nuevo en el rango indicado