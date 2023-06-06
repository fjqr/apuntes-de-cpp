#include <iostream>
#include <vector>
using namespace std;

// typedef std::vector<std::pair<std::string,int>> pair_int;
using pair_int = std::vector<std::string>;
int main()
{
    pair_int my_data{"Francisco José"};

    for (int i{0}; i <= my_data.size() - 1; i++)
    {

        std::cout << my_data[i] << '\n';
    }
    return 0;
}

/*
Tanto typedef como using sirven para dar un alias a los tipos
personalizados o básicos. Using está más recomendado para trabajar
con varios archivos.
*/