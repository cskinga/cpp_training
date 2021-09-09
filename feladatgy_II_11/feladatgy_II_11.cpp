//FGy. II. 11.feladat

#include <iostream>
#include <ctime>

#define HOSSZ 100

using namespace std;

void ismetlodo_szamok_meghatarozasa(int szamsor[]) {
    int ismetlodo_szamok[HOSSZ];
    int ismetlodesek_szama = 0;
    bool uj = true;
    for (int i = 0; i < 100; i++)
    {
        for (int j = i + 1; j < 100; j++)
        {
            if (szamsor[j] == szamsor[i]) // Van ismetlodes
            {
                for (int n = 0; n < ismetlodesek_szama; n++) { // Megvizsgaljuk, megtalaltuk-e mar korabban ezt az ismetlodest
                    if (szamsor[j] == ismetlodo_szamok[n]) // Ha megtalaltuk korabban is, akkor nem szeretnenk ujra hozzaadni a seged tombhoz
                    {
                        uj = false;
                        break;
                    }
                }
                if (uj) { // Ha megtalaltuk korabban is, akkor nem szeretnenk ujra hozzaadni a seged tombhoz
                    ismetlodo_szamok[ismetlodesek_szama] = szamsor[j];
                    cout << ismetlodo_szamok[ismetlodesek_szama] << " ";
                    ismetlodesek_szama++;
                }
                uj = true;
            }
        }
    }
}

int main()
{
    int szamsor[HOSSZ];
    srand(time(NULL));
    for (int szamlalo = 0; szamlalo < 100; szamlalo++)
    {
        szamsor[szamlalo] = rand() % 51;
        cout << szamsor[szamlalo] << " ";
    }
    cout << "\n\n";
    ismetlodo_szamok_meghatarozasa(szamsor);
}
