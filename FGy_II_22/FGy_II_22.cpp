// FGy_II_22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void azonos_karakter_keresese(string elso, string masodik)
{
    for (int i = 0; i < elso.length(); i++)
    {
        for (int j = 0; j < masodik.length(); j++)
        {
            if (elso[i] == masodik[j])
            {
                cout << elso[i] << "-> elso: " << i << "\t" << " masodik: " << j << "\n";
            }
        }
    }
}

int main()
{
    //std::cout << "Hello World!\n";
    azonos_karakter_keresese("abcdefghijklmnoprstuv", "bdfhjlnpsu");
    azonos_karakter_keresese("bbddffhhjjllnnppssuu", "bdfhjlnpsu");
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
