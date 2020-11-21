#include <stdio.h>
#include <stdlib.h>


int puissance(int base, int exposant)
{
    if (base == 0 || exposant == 0)
    {
        return 0;
    }

    int resultat = base;

    for (int i = 1; i < exposant; i++)
    {
        resultat = resultat * base;
    }


    return resultat;
}


//fonction principale
int main()
{

   printf("0^3 = %d\n", puissance(0,3));
   printf("2^0 = %d\n", puissance(2,0));
   printf("2^3 = %d\n", puissance(2,3));

	return 0;
}



