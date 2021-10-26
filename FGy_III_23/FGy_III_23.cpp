// FGy_III_23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

char legtobbet_elofordulo_karakter()
{
    string szoveg;
    getline(cin, szoveg);
    int elofordulas = 0;
    char legtobb_karakter;
    int szamlalo = 1;
    for (int i = 0; i < szoveg.size() - 1; i++)
    {
        for (int j = i + 1; j < szoveg.size(); j++)
        {
            if (((szoveg[i] >= 'a' && szoveg[i] <= 'z') || (szoveg[i] >= 'A' && szoveg[i] <= 'Z')) &&
                ((szoveg[j] >= 'a' && szoveg[j] <= 'z') || (szoveg[j] >= 'A' && szoveg[j] <= 'Z')) &&
                szoveg[j] == szoveg[i])
            {
                szamlalo += 1;
            }
            if (szamlalo > elofordulas)
            {
                elofordulas = szamlalo;
                legtobb_karakter = szoveg[i];
            }
            szamlalo = 1;
        }
    }
    return legtobb_karakter;
}

int main()
{
    std::cout << "Hello World!\n";
    cout << legtobbet_elofordulo_karakter();
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
