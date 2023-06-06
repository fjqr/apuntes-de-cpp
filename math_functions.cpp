#include <iostream>
#include <cmath>

int main()
{
    double num_a{4};
    double num_b{6};
    double num_c{3.99};
    double result;
    // result = std::min(num_a, num_b);
    // result = std::max(num_a, num_b);
    // result = pow(2,4);
    //result = sqrt(9);
    // result = abs(-3);
    // result = round(num_c);
    //result = floor(num_c);
    result = ceil(num_c);
    std::cout << result << '\n';
    return 0;
}
