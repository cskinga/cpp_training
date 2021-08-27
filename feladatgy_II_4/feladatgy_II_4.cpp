// feladatgy_II_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Sorold fel az első N négyzetszámot.
//

#include <iostream>
#include <string>

using namespace std;

void elso_n_negyzetszam(int n) {
    for (int i = 1; i <= n; i++) {
        cout << i * i;
        cout << " ";
    }
    cout << "\r\n";
}

int main()
{
    elso_n_negyzetszam(1);
    elso_n_negyzetszam(4);
    elso_n_negyzetszam(-4);
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
