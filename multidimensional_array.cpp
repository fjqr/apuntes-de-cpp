#include <iostream>

int main()
{

    std::string football_teams[3][3] = {{"Real Madrid", "Barcelona", "Valencia"},
                                        {"Inter", "Milan", "Juventus"},
                                        {"Man U", "Man City", "Liverpool"}};

    int rows = sizeof(football_teams) / sizeof(football_teams[0]);
    int columns = sizeof(football_teams[0]) / sizeof(football_teams[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << football_teams[i][j] << " ";
        }
        std::cout << '\n';
    }
    return 0;
}