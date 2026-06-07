#include <iostream>

/*
Nested For Loop right Triangle
*
* *
* * *
* * * *
* * * * *
*/
void rightTriangle()
{
    // Decleration
    int number;

    // I/O
    std::cout << "Enter the Size of Pattern : ";
    std::cin >> number;

    for (int i = 0; i < number; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            std::cout << " * ";
        }
        std::cout << std::endl;
    }
}

/*
Nested For Loop Left  RIghtTriangle
        *
      * *
    * * *
  * * * *
* * * * *
*/
void leftRightTriangle()
{
    // Decleration
    int number;

    // I/O
    std::cout << "Enter the Size of Pattern : ";
    std::cin >> number;

    for (int i = 0; i < number; ++i)
    {
        for (int n = number; n > i; --n)
        {
            std::cout << "   ";
        }
        for (int j = 0; j <= i; ++j)
        {
            std::cout << " * ";
        }
        std::cout << std::endl;
    }
}

/*
Nested For Loop Left  equilatoral Triangle
        *
      *  *
    *  *  *
  *  *  *  *
*  *  *  *  *
*/
void equilateralTraingle()
{
    // Decleration
    int number;

    // I/O
    std::cout << "Enter the Size of Pattern : ";
    std::cin >> number;

    for (int i = 0; i < number; ++i)
    {
        for (int n = number; n > i; --n)
        {
            std::cout << "  ";
        }
        for (int j = 0; j <= i; ++j)
        {
            std::cout << " *  ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int choice = 0;
    while (choice >= 0)
    {
        std::cout << "1. Right Triangle" << std::endl
                  << "2. Left Triangle" << std::endl
                  << "3. Equilatoral Triangle" << std::endl
                  << "4. Exit" << std::endl;
        std::cout << "What type of triangel you want to create :";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            rightTriangle();
            break;
        case 2:
            leftRightTriangle();
            break;
        case 3:
            equilateralTraingle();
            break;

        default:
            choice = -1;
            exit(0);
            break;
        }
    }
    return 0;
}