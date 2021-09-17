// FGy_II_26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>

using namespace std;

void primszamok(int prim)
{
    list<int> primek;
    for (int i = prim; i > 1; i--)
    {
        for (int j = 2; j < prim; j++)
        {
            if (i != j && i % j == 0)
            {
                i -= 1;
            }
            else if(i == j || i % j == 0)
            {
                primek.push_front(i);
            }
        }
    }
    for (list<int>::iterator it = primek.begin(); it != primek.end(); ++it)
    {
        cout << *it << " ";
    }
}

void primtenyezos_szorzat(int szam)
{
    for (int i = 2; i <= szam; i++)
    {
        if (szam % i == 0)
        {
            cout << i << " * ";
            szam = szam / i;
            i--;
        }
    }
}

int main()
{
    std::cout << "Hello World!\n";
    primszamok(20);
    cout << "\n";
    primtenyezos_szorzat(100);
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
