// FGy_II_12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

/*stringbol -> szam, ha nem akkor irjon hibauzenetet
ha szam akkor 3*-osat irja ki.
b) negativ szamokat is felismerje,
c) tortszamokat -"-
d) hatvanykitevos alakok -"- */

using namespace std;

void bekert_szam(string ertek)
{
    bool karakter = false;
    for (int i = 0; i < ertek.size() && karakter != true; i++)
    {
        if (ertek[0] != '-' && ertek[i] != '.' && ertek[i] != 'e' && (ertek[i] < '0' || ertek[i] > '9'))
        {
            cout << "nem egy szam!!";
            karakter = true;
        }

    }
    if (karakter == false)
    {
        cout << 3 * stoi(ertek);
    }
}

int main()
{
    bekert_szam("123");
    cout << "\n";
    bekert_szam("-123");
    cout << "\n";
    bekert_szam("123.23");
    cout << "\n";
    bekert_szam("123e2");
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
