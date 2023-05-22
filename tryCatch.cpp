#include <iostream>
#include <string>
using namespace std;

int main()
{

    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "Edad adecuada"
                 << "\n";
        }
        else
        {
            throw(age);
        }
    }
    catch (int errorNum)
    {
        cout << "Debes ser mayor de 18 años"
             << "\n";
        cout << "Tu edad es: " << errorNum << "\n";
    }
    return 0;
}