#include "Zad4.h"

int Dwusilnia(int n)
{
	int wynik = 1;

	for (; n > 1; n -= 2)
	{
		wynik = wynik * n;
	}
	
	return wynik;
}
