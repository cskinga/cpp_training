// FGy_II_14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*a fuggveny harom szovebol alljon mibol, mit, mire.
az FGy. I. 21. fuggvenyet atalakitani ugy, hogy a kezdoerteket adja vissza*/
#include <iostream>
#include <string>

using namespace std;

string bekert_szoveg(string szoveg, string mit, string mire)
{
    string seged = szoveg;
    bool benne = false;
    for (int i = 0; i <= seged.size(); i++)
    {
        for (int j = 0; j < mit.length(); j++)
        {
            if (mit[j] == seged[i])
            {
                i++;
                if (j == (mit.length() - 1))
                {
                    benne = true;
                    seged =  seged.substr(0, i - j - 1) + mire + seged.substr(i, seged.length());
                }

            }
            else
                break;
        }
    }
    return seged;
}

int main()
{
    //std::cout << "Hello World!\n";

    cout << bekert_szoveg("az almafan alma van.", "alma", "szilva");
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
