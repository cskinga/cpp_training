// FGy_II_31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void atlos_negyzet(double sor)
{
    for (int i = 0; i < sor; i++)
    {
        for (int j = 0; j < (sor / 2) - 1; j++)
        {
            if (i % 2 == 0)
            {
                cout << "*   ";
            }
            else
            {
                printf("  *");
            }
        }
        cout << "\n";
    }
}

int main()
{
    std::cout << "Hello World!\n";
    int sakk = 8;
    for (int i = 0; i < sakk; i++)
    {
        for (int j = 0; j < (sakk / 2); j++)
        {
            if (i % 2 == 0)
            {
                cout << "**  ";
            }
            else
            {
                printf("  **");
            }
        }
        cout << "\n";
    }
    cout << "\n\n";

    atlos_negyzet(9);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
