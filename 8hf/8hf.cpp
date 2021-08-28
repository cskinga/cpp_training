// 8hf.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

using namespace std;

//FGy II. 5.feladat
void negyzetszam(int K, int n) 
{
    for (int i = 1; i <= n; i++)
    {
        if (K > i * i)
        {
            cout << i * i;
            cout << " ";
        }
    }
    cout << "\n";
}

void Fibonacci(int m)
{
    int a = 0;
    int b = 1;
    int c = 0;
    if (m >= 2)
    {
        cout << a;
        cout << " ";
        cout << b;
        cout << " ";
    }
    else if (m == 1)
    {
        cout << a;
    }
    else
    {
        cout << "Mivel a d erteke 0, ezert a Fibonacci-sorozatnak nincs eleme.";
    }
    cout << " ";
    for(int i = 0; i < m - 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c;
        cout << " ";
    }
    cout << "\n";
}
int main()
{
    //std::cout << "Hello World!\n";


    //FGy II. 5.feladat
    cout << "FGy II. 5.feladat:\n";
    negyzetszam(10, 10); //ez jó
    negyzetszam(100, 200); // ez jó
    negyzetszam(100, 7); //ez nem jó
    cout << "\n";
    //FGy II. 7.feladat
    cout << "FGy II. 7.feladat:\n";
    Fibonacci(10);
    Fibonacci(1);
    Fibonacci(0);
    cout << "\n";
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
