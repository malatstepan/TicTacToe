#include <iostream>

int findPlace(const std::string& iwantThat)
{
    if (iwantThat == "a1") return 7;
    if (iwantThat == "a2") return 4;
    if (iwantThat == "a3") return 1;
    if (iwantThat == "b1") return 8;
    if (iwantThat == "b2") return 5;
    if (iwantThat == "b3") return 2;
    if (iwantThat == "c1") return 9;
    if (iwantThat == "c2") return 6;
    if (iwantThat == "c3") return 3;
    else return -1;
}


void showBoard(const std::string& Board)
{
    int number;
    for (int i = 0; i < 3; i++)
    {
        switch (i)
        {
            case 0:
                number = 3;
                break;
            case 1:
                number = 2;
                break;
            case 2:
                number = 1;
                break;
        }
        std::cout << number << "  ";
        for (int j = 0; j < 3; j++)
        {
            std::cout << Board[i * 3 + j] << "  ";
        }
        std::cout << std::endl;
    }
    std::cout << "   a  b  c";
}