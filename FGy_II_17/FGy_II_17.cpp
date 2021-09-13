// FGy_II_17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

//szamlalo valtozo letrehozasa a nyitozarojelekhez es zarozarojelhez.

using namespace std;

string zarojelpar_kereses(string szoveg)
{
    for (int i = 0; i < szoveg.length(); i++)
    {
        if (szoveg[i] == '(')
        {
            for (int j = i; j < szoveg.length(); j++)
            {
                if (szoveg[j] == ')')
                {
                    szoveg = szoveg.substr(i + 1, j - i - 1);
                    cout << szoveg << "\n";
                }
            }
        }
    }
    return szoveg;
}

int main()
{
    //std::cout << "Hello World!\n";
    zarojelpar_kereses("ebben a szovegben a zarojel kozott (ez) szerepel.");
    zarojelpar_kereses("ebben a szovegben a zarojel kozott )(ez) szerepel.");
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
