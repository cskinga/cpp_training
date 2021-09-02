// FGy_II_14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string bekert_szoveg(string szoveg)
{
    string seged = szoveg;
    for (int i = 0; i <= seged.size(); i++)
    {
        if (seged[i] == 'a' && seged[i - 1] == 'm' && seged[i + 2] == 'l' && seged[i + 3] == 'a')
        {
            seged[i] == 'k';
            seged[i + 1] == 'o';
            seged[i + 2] == 'r';
            seged[i + 3] == 't';
            seged[i + 4] == 'e';
        }
    }
    return seged;
}

int main()
{
    //std::cout << "Hello World!\n";
    string szoveg;
    getline(cin, szoveg);
    cout << bekert_szoveg(szoveg);
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
