#include <iostream>
#include <map>
#include <string>

int main()
{

    std::map<std::string, std::string> my_map;
    my_map.insert(std::pair<std::string, std::string>("modelo", "Camaro"));
    my_map.insert(std::pair<std::string, std::string>("marca", "Chevrolet"));
    my_map.insert(std::pair<std::string, std::string>("año", "1972"));

    for (auto pair : my_map)
    {
        std::cout << pair.first << " - " << pair.second << '\n';
    }
    return 0;
}