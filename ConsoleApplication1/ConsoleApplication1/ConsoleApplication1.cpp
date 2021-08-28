// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;



int main()
{
    //std::cout << "Hello World!\n";
    //FGy 20.feladat
    string a;
    printf("FGy 20.feladat\n");
    getline(cin, a);
    if (a[0] >= 'a' && a[0] <= 'z')
    {
        a[0] = a[0] + ('A' - 'a');
    }
    cout << a;
    printf("\n");
    //Fgy vegyes 1.feladat
    printf("FGy vegyes 1.feladat\n");
    int n;
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("* ");
    }
    printf("\n");
    printf("FGy vegyes 1.feladat b.\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    printf("FGy vegyes 1.feladat c.\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    /*printf("FGy vegyes 1.feladat d.\n");
    if (n % 2 == 0)
    {

    }*/

    printf("FGy vegyes 1.feladat e.\n");
    int sakk = 8;
    for (int i = 0; i < sakk; i++)
    {
        for (int j = 0; j < (sakk / 2); j++)
        {
            if (i % 2 == 0)
            {
                printf("**  ");
            }
            else
            {
                printf("  **");
            }
        }
        printf("\n");
    }
    printf("\n");

    printf("FGy vegyes 2.feladat\n");
    int x, y, z;
    scanf_s("%d", &x);
    scanf_s("%d", &y);
    scanf_s("%d", &z);
    if (x > y && x > z)
    {
        printf("A legnagyobb szam az x: %d\n", x);
    }
    else if (y > x && y > z)
    {
        printf("A legnagyobb szam az y: %d\n", y);
    }
    else if (z > y && z > x)
    {
        printf("A legnagyobb szam a z: %d\n", z);
    }
    else
    {
        printf("a harom szam kozul a legnagyobb ertek tobszor is elofordul.\n");
    }
    printf("\n");

    printf("FGy vegyes 3.feladat\n");
    int w, q;
    scanf_s("%d", &w);
    scanf_s("%d", &q);
    printf("A ket szam osztoi: ");
    if (q > w)
    {
        for (int i = 1; i <= w; i++)
        {
            if (q % i == 0 && w % i == 0)
            {
                printf("%d ", i);
            }
        } 
    }
    else
    {
        for (int i = 1; i <= q; i++)
        {
            if (q % i == 0 && w % i == 0)
            {
                printf("%d ", i);
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
