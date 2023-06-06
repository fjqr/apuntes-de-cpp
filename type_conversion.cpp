#include <iostream>

int main()
{
    int num_a{23};
    int num_b{2};
    double div{num_a / (double)num_b};
    std::cout << div << '\n';
    return 0;
}

/*
Para convertir de un tipo a otro se escribe el tipo nuevo entre parén
tesis.
*/