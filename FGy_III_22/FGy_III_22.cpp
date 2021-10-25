// FGy_III_22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void karakterek_szamlalasa()
{
    int tomb[3];
    string szoveg;
    int szamjegy = 0;
    int kisbetu = 0;
    int nagybetu = 0;
    getline(cin, szoveg);
    for (int i = 0; i < szoveg.size(); i++)
    {
        if (szoveg[i] >= '0' && szoveg[i] <= '9')
        {
            szamjegy += 1;
        }
        else if (szoveg[i] >= 'a' && szoveg[i] <= 'z')
        {
            kisbetu += 1;
        }
        else if (szoveg[i] >= 'A' && szoveg[i] <= 'Z')
        {
            nagybetu += 1;
        }
    }
    tomb[0] = szamjegy;
    tomb[1] = kisbetu;
    tomb[2] = nagybetu;
    cout << tomb[0] << " " << tomb[1] << " " << tomb[2];
}

int main()
{
    std::cout << "Hello World!\n"; 
    karakterek_szamlalasa();
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
