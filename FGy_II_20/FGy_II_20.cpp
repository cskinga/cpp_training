// FGy_II_20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

using namespace std;
int i;
int szamsor[20];
int seged[20];

string reverse(string vissza)
{
    string seged = vissza;
    for (int i = 0; i < seged.size(); i++)
    {
        seged[i] = vissza[vissza.size() - i - 1];
    }
    return seged;
}


int main()
{
    //std::cout << "Hello World!\n";
    srand(time(NULL));
    for (int j = 0; j < 20; j++)
    {
        i = rand() % 50;
        szamsor[j] = i;
        seged[j] = szamsor[j];
    }
    for (int o = 0; o < 20; o++)
    {
        cout << szamsor[o] << " ";
    }
    cout << "\n";
    for (int n = 0; n < 20; n++)
    {
        seged[n] = szamsor[19 - n];
        cout << seged[n] << " ";
    }
    cout << "\n";
    cout << reverse(".nav avtidrof gevozs  a zE");
    
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
