// FGy_III_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int valodi_osztok_osszege(int szam)
{
    int seged = 0;
    for (int i = 2; i < szam; i++)
    {
        if (szam % i == 0)
        {
            seged += i;
        }
    }
    return seged;
}

int main()
{
    std::cout << "Hello World!\n";
    cout << valodi_osztok_osszege(10);
    cout << "\n";
    cout << valodi_osztok_osszege(11);
    cout << "\n";
    cout << valodi_osztok_osszege(100);
    cout << "\n";
    cout << valodi_osztok_osszege(101);
    cout << "\n";
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
