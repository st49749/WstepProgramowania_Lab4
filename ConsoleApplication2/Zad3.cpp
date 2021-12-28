#include <iostream>
#include "Zad3.h"

using namespace std;

void DziesietneDoBinarnejPostaci(int liczba)
{
    int i = 0;
    int resztyZDzielenia[32];
    
    while (liczba > 0) 
    {
        resztyZDzielenia[i] = liczba % 2;
        liczba = liczba / 2;
        i++;
    }

    for (int j = i -1; j >= 0; j--)
        cout << resztyZDzielenia[j];
}
