// FGy_II_22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void azonos_karakter_keresese(string elso, string masodik)
{
    for (int i = 0; i < min(elso.length(), masodik.length()); i++)
    {
        if (elso[i] == masodik[i])
        {
            cout << i << " ";
        }
    }
}

int main()
{
    //std::cout << "Hello World!\n";
    azonos_karakter_keresese("az almafan alma van.", "a kortefan korte van.");
    cout << "\n";
    azonos_karakter_keresese("almalma", "alma van.");
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
