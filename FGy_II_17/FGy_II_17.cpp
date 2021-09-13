// FGy_II_17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

//szamlalo valtozo letrehozasa a nyitozarojelekhez es zarozarojelhez.

using namespace std;

string zarojelpar_kereses(string szoveg)
{
    int szamlalo = 0;
    int szamlalo2 = 0;
    bool zarojel = false;
    for (int i = 0; i < szoveg.length(); i++)
    {
        if (szoveg[i] == '(')
        {
            szamlalo += 1;
            szamlalo2 = 1;
            zarojel = true;
            for (int j = i + 1; j < szoveg.length(); j++)
            {
                if (szoveg[j] == '(')
                {
                    szamlalo += 1;
                    szamlalo2 += 1;
                }
                else if (szoveg[j] == ')')
                {
                    szamlalo -= 1;
                    szamlalo2 -= 1;
                    if (szamlalo2 == 0)
                    {
                        cout << szoveg.substr(i + 1, j - i - 1) << "\n";
                    }
                }
            }
        }
    }
    if(szamlalo != 0)
    {
        cout << "Hibas zarojelezes!!\n";
    }
    else if(zarojel == false)
    {
        cout << "Nem szerepel a szovegben zarojel.\n";
    }
    return szoveg;
}

int main()
{
    //std::cout << "Hello World!\n";
    zarojelpar_kereses("ebben a szovegben a zarojel kozott (ez) szerepel.");
    zarojelpar_kereses("ebben a szovegben a zarojel kozott ez szerepel.");
    zarojelpar_kereses("ebben a szovegben a zarojel kozott )(ez szerepel.");
    zarojelpar_kereses("ebben a szovegben a zarojel kozott (ez ))szerepel.");
    zarojelpar_kereses("ebben a szovegben a zarojel kozott ((ez) szerepel.");
    zarojelpar_kereses("ebben a szovegben a zarojel( kozott )(ez) szerepel.");
    zarojelpar_kereses("ebben a szovegben a zarojel (kozott()( )(ez) s)zerepel.");
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
