// FGy_III_20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool prim_e(int szam)
{
    bool prim = false;
    if (szam == 2)
    {
        prim = true;
    }
    else
    {
        for (int i = 2; i < szam; i++)
        {
            if (szam % i != 0)
            {
                prim = true;
            }
            else
            {
                prim = false;
                break;
            }
        }
    }
    return prim;
}

int elso_N_primszam(int n)
{
    int szam = 0;
    for (int i = 2; i <= n + 2; i++)
    {
        if (prim_e(i))
        {
            szam = i;
            cout << szam << " ";
        }
        else
        {
            i--;
        }
    }
    return szam;
}

int main()
{
    cout << elso_N_primszam(3);
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
