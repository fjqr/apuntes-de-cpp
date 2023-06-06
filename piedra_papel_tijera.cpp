#include <iostream>
#include <ctime>

int dificultad();
char player();
char computer();
void eleccion(char ele);
void score(int player_score, int computer_score);
char winner(char player, char computer);

int main()
{
    int juegos = dificultad();
    int partidas_jugadas{0};
    char play, comp, ganador;
    int comp_winner{0};
    int player_winner{0};

    do
    {
        play = player();
        std::cout << "***************: " << '\n';
        std::cout << "Su elección fue: " << '\n';
        eleccion(play);
        std::cout << "***************: " << '\n';

        comp = computer();
        std::cout << "***************: " << '\n';
        std::cout << "La elección de la computadora fue: " << '\n';
        eleccion(comp);
        std::cout << "***************: " << '\n';
        ganador = winner(play, comp);

        switch (ganador)
        {
        case 'p':
            player_winner = player_winner + 2;
            break;
        case 'c':
            comp_winner = comp_winner + 2;
            break;
        case 't':
            player_winner++;
            comp_winner++;
            break;
        case 'x':
            player_winner--;
            comp_winner--;
            break;
        }
        partidas_jugadas++;
    } while (partidas_jugadas < juegos);

    score(player_winner, comp_winner);
    return 0;
}

int dificultad()
{
    char elec;
    std::cout << "********************************" << '\n';
    std::cout << "*******PIEDRA,PAPEL O TIJERA****" << '\n';
    std::cout << "********************************" << '\n';
    std::cout << "Escoja la dificultad del juego" << '\n';
    std::cout << "f: fácil" << '\n';
    std::cout << "m: medio" << '\n';
    std::cout << "d: difícil" << '\n';
    std::cin >> elec;

    if (elec == 'f')
    {
        return 5;
    }
    else if (elec == 'm')
    {
        return 7;
    }
    else
    {
        return 9;
    }
}
char player()
{
    char elec_player;
    std::cout << "Escoja su opción: " << '\n';
    std::cout << "p: Piedra" << '\n';
    std::cout << "a: Papel" << '\n';
    std::cout << "t: Tijera" << '\n';
    std::cin >> elec_player;

    return elec_player;
}
char computer()
{
    srand(time(0));
    int num{rand() % 3 + 1};
    std::cout << "La computadora escogerá una opción: " << '\n';
    if (num == 1)
    {
        return 'p';
    }
    else if (num == 2)
    {
        return 'a';
    }
    else
    {
        return 't';
    }
}
void eleccion(char ele)
{
    switch (ele)
    {
    case 'p':
        std::cout << "Piedra" << '\n';
        break;
    case 'a':
        std::cout << "Papel" << '\n';
        break;
    case 't':
        std::cout << "Tijera" << '\n';
        break;
    default:
        std::cout << "Elección no es válida" << '\n';
    }
}
void score(int player_score, int computer_score)
{
    if (player_score > computer_score)
    {
        std::cout << "¡¡¡FELICIDADES, ERES EL GANADOR!!!" << '\n';
    }
    else if (player_score < computer_score)
    {
        std::cout << "¡¡¡PERDEDOR, GANÓ LA MÁQUINA!!!" << '\n';
    }
    else
    {
        std::cout << "¡¡¡ESTO HA SIDO UN EMPATE!!!" << '\n';
    }

    std::cout << "**********************************" << '\n';
    std::cout << "**************RESULTADO***********" << '\n';
    std::cout << "TÚ: " << player_score << '\n';
    std::cout << "COMPUTADORA: " << computer_score << '\n';
}
char winner(char player, char computer)
{

    char wins;

    switch (player)
    {
    case 'p':
        if (computer == 'p')
        {
            wins = 't';
            break;
        }
        else if (computer == 'a')
        {
            wins = 'c';
            break;
        }
        else
        {
            wins = 'p';
            break;
        }
    case 'a':
        if (computer == 'p')
        {
            wins = 'p';
            break;
        }
        else if (computer == 'a')
        {
            wins = 't';
            break;
        }
        else
        {
            wins = 'c';
            break;
        }
    case 't':
        if (computer == 'p')
        {
            wins = 'c';
            break;
        }
        else if (computer == 'a')
        {

            wins = 'p';
            break;
        }
        else
        {
            wins = 't';
            break;
        }
    default:
        wins = 'x';
        break;
    }
    return wins;
}