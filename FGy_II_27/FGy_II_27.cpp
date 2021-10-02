// FGy_II_27_3_valtozat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string decimal_to_hexadecimal(int x)
{
    int szamjegy = 1;
    string z = "";
    if ((x / pow(10, szamjegy - 1)) >= 1)
    {
        szamjegy += 1;
    }
    else
    {
        if ((x / pow(16, szamjegy)) <= 1)
        {
            szamjegy -= 1;
        }
        else
        {
            for (int i = szamjegy; i >= 0; i--)
            {
                int oszto = pow(16, szamjegy);
                int m;
                m = x % oszto;
                int y = x - m;
                x = m;
                int a;
                a = y / oszto;
                if (a > 9)
                {
                    z += "" + ('A' + a);
                }
                else
                {
                    z += "" + a;
                }
                szamjegy -= 1;
                cout << z;
            }
            cout << z;
        }
        cout << z;
    }
    cout << z;
    return z;
}

string dtohx(int szam, int szamrdsz)
{
    string z = "";
    char seged;
    int maradek;
    while (szam > 0)
    {
        maradek = szam % szamrdsz;
        if (maradek > 9)
        {
            seged = 'A' + (maradek - 10);
            z = seged + z;
        }
        else
        {
            z = to_string(maradek) + z;
        }
        szam = (szam - maradek) / szamrdsz;
    }
    return z;
}

int main()
{
    cout << decimal_to_hexadecimal(9);
    cout << dtohx(255, 8);
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
