// FGy_III_14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int dimenzio_bekeres()
{
    cout << "a vektorok dimenzioja: ";
    int n;
    cin >> n;
    return n;
}

void vektortoltes(vector<int>& vektor, int n)
{
    cout << "vektor: ";
    int szam;
    while (vektor.size() < n)
    {
        cin >> szam;
        vektor.push_back(szam);
    }
    cout << endl;
}

void vektorkiiratas(const vector<int>& vektor)
{
    cout << "vektor: ";
    for (unsigned int i = 0; i < vektor.size(); i++)
    {
        cout << vektor[i];
    }
    cout << endl;
}

double skalaris_szorzat()
{
    vector<int> vektor1;
    vector<int> vektor2;
    double osszeg = 0;
    int d = dimenzio_bekeres();
    vektortoltes(vektor1, d);
    vektortoltes(vektor2, d);
    for (int i = 0; i < vektor1.size(); i++)
    {
        osszeg += vektor1[i] * vektor2[i];
    }
    return osszeg;
}

int main()
{
    std::cout << "Hello World!\n";

    cout << skalaris_szorzat();
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
