// FGy_II_21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


/*adj meg egy szamsort, az osszes reszsorozatat irja ki.
kell ket for ciklus*/
#include <iostream>
#include <cstdlib>

using namespace std;

void reszsorozatok(int n)
{
    int tomb[10] = {2, 3, 5, 7, 8, 12, 15, 17, 10, 4};
    for (int i = 0; i < n - 2; i++)
    {
        int d = tomb[i] - tomb[i + 1];
        cout << tomb[i] << " ";
        for (int j = i + 1; i < n - 1; j++)
        {
            if (abs(tomb[j] - tomb[i]) % abs(d))
            {
                cout << tomb[j] << " ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    std::cout << "Hello World!\n";
    reszsorozatok(10);
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
