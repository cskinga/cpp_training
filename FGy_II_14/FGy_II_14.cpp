// FGy_II_14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string bekert_szoveg(string szoveg)
{
    string seged;
    getline(cin, seged);
    for (int i = 0; i <= szoveg.size(); i++)
    {
        if (szoveg[i] == 'a' && szoveg[i + 1] == 'l' && szoveg[i + 2] == 'm' && szoveg[i + 3] == 'a')
        {
            szoveg.erase(i, 4);
            szoveg.append(seged, 0, seged.size() - 1);
   
        }
    }
    return szoveg;
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
