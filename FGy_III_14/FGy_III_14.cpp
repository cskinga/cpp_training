// FGy_III_14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void vektortoltes(vector<int>& vektor, int n);

void vektorkiiratas(const vector<int>& vektor);

void vektortoltes(vector<int>& vektor, int n)
{
    cout << "vektor: ";
    int szam;
    cin >> szam;
    while (vektor.size() < n - 1)
    {
        vektor.push_back(szam);
        cin >> szam;
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

double skalaris_szorzat(int n)
{
    vector<int> vektor1;
    vector<int> vektor2;
    double osszeg = 0;
    vektortoltes(vektor1, n);
    vektortoltes(vektor2, n);
    for (int i = 0; i < n; i++)
    {
        osszeg += vektor1[i] * vektor2[i];
    }
    return osszeg;
}

int main()
{
    std::cout << "Hello World!\n";
    skalaris_szorzat(3);
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
