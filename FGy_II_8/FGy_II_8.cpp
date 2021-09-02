// FGy_II_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int szamharmas(int a, int b, int c)
{
    if (a <= b && a <= c)
    {
        cout << a << " ";
        if (b <= c)
        {
            cout << b << " " << c;
        }
        else
        {
            cout << c << " " << b;
        }
    }
    else if (b <= c && b <= a)
    {
        cout << b << " ";
        if (a <= c)
        {
            cout << a << " " << c;
        }
        else
        {
            cout << c << " " << a;
        }
    }
    else if (c <= a && c <= b)
    {
        cout << c << " ";
        if (a <= b)
        {
            cout << a << " " << b;
        }
        else
        {
            cout << b << " " << a;
        }
    }
    cout << "\n";
    return a, b, c;

}

int main()
{
    //std::cout << "Hello World!\n";
    szamharmas(1, 1, 1);
    szamharmas(2, 3, 1);
    szamharmas(2, 4, 6);
    szamharmas(9, 3, 6);
    szamharmas(4, 12, 8);
    szamharmas(6, 4, 6);
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
