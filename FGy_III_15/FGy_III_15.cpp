// FGy_III_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <string>
#include <cmath>

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

int legnagyobb_ugras()
{
    string szam;
    list<int> szamsor;
    int ugras = 0;
    int szamlalo = 0;
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
    for (list<int>::iterator it = szamsor.begin(); it != szamsor.end(); it++)
    {
        if (ugras < abs(szamlalo - *it))
        {
            ugras = abs(szamlalo - *it);
        }
        szamlalo = *it;
    }
    return ugras;
}

int main()
{
    std::cout << "Hello World!\n";
    cout << legnagyobb_ugras();
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
