// FGy_II_18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string nagy_es_kisbetuk_csereje(string szoveg)
{
    for (int i = 0; i < szoveg.length(); i++)
    {
        if (szoveg[i] >= 'a' && szoveg[i] <= 'z')
        {
            szoveg[i] = szoveg[i] + 'A' - 'a';
        }
        else if (szoveg[i] >= 'A' && szoveg[i] <= 'Z')
        {
            szoveg[i] = szoveg[i] - 'A' + 'a';
        }
    }
    return szoveg;
}

int main()
{
    //std::cout << "Hello World!\n";
    cout << nagy_es_kisbetuk_csereje("MeG CsErElOdTeK A KiS Es nAgY BeTuK.") << "\n";
    cout << nagy_es_kisbetuk_csereje("EZ A MONDAT CSAK KISBETUBOL ALL.\nez pedig csak nagybetubol.");
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
