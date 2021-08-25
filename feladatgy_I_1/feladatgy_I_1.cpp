#include <iostream>

int main()
{
    int szam = 0;
    printf("Adj meg egy egesz szamot megmondom, paros-e: ");
    scanf_s("%d", &szam);
    if (szam % 2 == 0) {
        std::cout << "A szam paros.\n";
    }
    else {
        std::cout << "A szam nem paros.\n";
    }
}