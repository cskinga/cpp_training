// monogramm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//FGy. II. 13.feladat

#include <iostream>
#include <string>

using namespace std;

string monogramm_szerkesztes(string nev)
{
    string monogramm;
    int j = 0;
    if (nev[j] >= 'a' && nev[j] <= 'z' || nev[j] >= 'A' && nev[j] <= 'Z')
    {
        monogramm = nev[j];
        cout << monogramm;
    }
    for (int i = 1; i < nev.size(); i++)
    {
        if ((nev[i] >= 'a' && nev[i] <= 'z' || nev[i] >= 'A' && nev[i] <= 'Z') && (nev[i - 1] == ' ' || nev[i - 1] == '\t'))
        {

            monogramm = nev[i];
            cout << monogramm;
        }
    }
    cout << "\n";
    return monogramm;
}

int main()
{
    //std::cout << "Hello World!\n";
    monogramm_szerkesztes(" Horvath Balint Akos");
    monogramm_szerkesztes("Horvath Balint Akos");
    monogramm_szerkesztes(" horvath Balint akos");
    monogramm_szerkesztes("Horvath balint Akos");

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
