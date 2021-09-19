// FGy_II_29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

float negyzetgyok_kozelites(int x, int n)
{
    float a0 = 1;
    float an;
    for (int i = 1; i <= n; i++)
    {
        an = 0.5 * (a0 + (x / a0));
        a0 = an;
    }
    return a0;
}

int main()
{
    std::cout << "Hello World!\n";
    cout << negyzetgyok_kozelites(4, 1);
    cout << "\n";
    cout << negyzetgyok_kozelites(4, 2);
    cout << "\n";
    cout << negyzetgyok_kozelites(4, 3);
    cout << "\n";
    cout << negyzetgyok_kozelites(4, 4);
    cout << "\n";
    cout << negyzetgyok_kozelites(36, 6);
    cout << "\n";
    cout << negyzetgyok_kozelites(100, 10);
    cout << "\n";
    cout << negyzetgyok_kozelites(2, 3);
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
