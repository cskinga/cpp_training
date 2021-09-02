// masodfoku_egyenlet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//FGy II. 9.feladat

#include <iostream>
#include <cmath>

using namespace std;

void masodfoku_egyenletek_kiirasa(int a, int b, int c)
{
    float x1, x2;
    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    if (a > 0 && a < 10 && b > 0 && b < 10 && c > 0 && c < 10)
    {
        if (x1 == x2)
        {
            cout << a << " * x^(2) + " << b << " * x + " << c << " = 0";
            cout << "\n";
        }

    }
}

int main()
{
    //std::cout << "Hello World!\n";
    /*masodfoku_egyenletek_kiirasa(1, 1, 1);
    masodfoku_egyenletek_kiirasa(1, 6, 9);
    masodfoku_egyenletek_kiirasa(2, 4, 2);
    masodfoku_egyenletek_kiirasa(8, 8, 2);
    masodfoku_egyenletek_kiirasa(9, 4, 2);
    masodfoku_egyenletek_kiirasa(5, 10, 5);*/

    int d, e, f;
    for (d = 1; d < 10; d++)
    {
        for (e = 1; e < 10; e++)
        {
            for (f = 1; f < 10; f++)
            {
                masodfoku_egyenletek_kiirasa(d, e, f);
            }
        }
    }
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
