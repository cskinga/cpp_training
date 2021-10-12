// FGy_III_07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int valodi_osztok_szama(int szam)
{
    int seged = 0;
    for (int i = 2; i < szam; i++)
    {
        if (szam % i == 0)
        {
            seged += 1;
        }
    }
    return seged;
}

int legtobb_valodi_oszto(int a, int b)
{
    int osztok_szama = 0;
    int max = 0;
    int szam = 0;
    for (int i = a; i <= b; i++)
    {
        osztok_szama = valodi_osztok_szama(i);
        if (max < osztok_szama)
        {
            max = osztok_szama;
            szam = i;
        }
    }
    return szam;
}

int main()
{
    std::cout << "Hello World!\n";
    cout << legtobb_valodi_oszto(3, 10);
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
