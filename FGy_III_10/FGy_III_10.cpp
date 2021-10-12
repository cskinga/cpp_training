// FGy_III_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <string>

using namespace std;

double osszes_atlag_alatti_szam()
{
    string szam;
    list<int> szamsor;
    double osszeg = 0;
    double atlag = 0;
    double szamlalo = 0;
    do
    {
        getline(cin, szam);
        if (szam != "")
        {
            szamsor.push_back(stoi(szam));
        }
    } 
    while (!szam.empty());
    for (list<int>::iterator it = szamsor.begin(); it != szamsor.end(); it++)
    {
        osszeg += *it;
    }
    atlag = osszeg / szamsor.size();
    for (list<int>::iterator it = szamsor.begin(); it != szamsor.end(); it++)
    {
        if (*it < atlag)
        {
            szamlalo += 1;
        }
    }
    return szamlalo;
}

int main()
{
    std::cout << "Hello World!\n";
    cout << osszes_atlag_alatti_szam();
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
