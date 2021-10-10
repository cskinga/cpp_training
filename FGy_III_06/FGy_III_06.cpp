// FGy_III_06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int elso_n_tokeletesszam(int n)
{
    int szam = 3;
    int seged = 0;
    for (int i = 0; i < n; i++)
    {
        for (int oszto = 1; oszto < szam; oszto++)
        {
            if (szam % oszto == 0)
            {
                seged += oszto;
            }
        }
        if (seged != szam)
        {
            seged = 0;
            i--;
        }
        else
        {
            cout << seged << " ";
        }
        seged = 0;
        szam += 1;
    }
    return seged;
}

int main()
{
    std::cout << "Hello World!\n";
    elso_n_tokeletesszam(4);
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
