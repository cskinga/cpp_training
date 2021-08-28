// FGy_I_21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

bool elso_a_masodikban(string elso, string masodik)
{
    bool benne = false;
    for (int i = 0; i < masodik.length(); i++)
    {
        for (int j = 0; j < elso.length(); j++)
        {
            if (elso[j] == masodik[i])
            {
                i++;
                if (j == (elso.length() - 1))
                {
                    benne = true;
                }
            }
            else
            {
                break;
            }
        }
    }
    return benne;
}

int main()
{
    //std::cout << "Hello World!\n";
    cout << elso_a_masodikban("asdfg", "asdfuyk hyrjlytasdfgt jlutk.");
    printf("\n");
    cout << elso_a_masodikban("asdfg", "asdfuyk hyrjlytat jlutk.");
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
