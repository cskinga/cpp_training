// FGy_III_17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <string>


using namespace std;

bool egesz_szam_e(string szam)
{
    bool egesz = true;
    for (int i = 0; i < szam.size(); i++)
    {
        if (szam[i] < '0' || szam[i] > '9')
        {
            egesz = false;
        }
    }
    return egesz;
}

int novekvo_szamsorozat_e()
{
    string szam;
    list<int> szamsor;
    int szamlalo = 0;
    bool nagyobb = false;
    getline(cin, szam);
    if (szam != "" && egesz_szam_e(szam) == true)
    {
        szamsor.push_back(stoi(szam));
    }
    while (!szam.empty())
    {
        getline(cin, szam);
        if (szam != "" && egesz_szam_e(szam) == true)
        {
            szamsor.push_back(stoi(szam));
        }
    }
    szamlalo = *szamsor.begin();
    for (list<int>::iterator it = szamsor.begin(); it != szamsor.end(); it++)
    {
        if (szamlalo <= *it)
        {
            nagyobb = true;
        }
        else
        {
            nagyobb = false;
            break;
        }
        szamlalo = *it;
    }
    return nagyobb;
}
int main()
{
    cout << novekvo_szamsorozat_e();
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
