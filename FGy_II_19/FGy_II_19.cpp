// FGy_II_19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

using namespace std;
int i;
int szamsor[20];
int szamsor2[20];

int main()
{
    //std::cout << "Hello World!\n";
    srand(time(NULL));
    for (int j = 0; j < 20; j++)
    {
        i = rand() % 90;
        if (i % 2 == 0)
        {
            szamsor[j] = i;
        }
        else
            j--;
    }
    for (int o = 0; o < 20; o++)
    {
        cout << szamsor[o] << " ";
    }
    cout << "\n";
    for (int m = 0; m < 20; m++)
    {
        szamsor[m] = szamsor[m] / 2;
        cout << szamsor[m] << " ";
    }
    cout << "\n";
    cout << "\n";
    // b resz
    for (int j = 0; j < 20; j++)
    {
        i = rand() % 80;
        szamsor2[j] = i;
    }
    for (int o = 0; o < 20; o++)
    {
        cout << szamsor[o] << " ";
    }
    cout << "\n";
    for (int p = 0; p < 20; p++)
    {
        if (szamsor2[p] % 2 == 0)
        {
            szamsor2[p] = szamsor2[p] / 2;
        }
        cout << szamsor2[p] << " ";
    }
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
