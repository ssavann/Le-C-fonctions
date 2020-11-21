#include <stdio.h>
#include <stdlib.h>


int max1D(int tab[], int taille)
{
    int valeur_max = 0;
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] > valeur_max)
        {
            valeur_max = tab[i];
        }
    }


    return valeur_max;
}
//il faut mettre une valeur "5" dans "int tab[][5]"
int max2D(int tab[][5], int nb_ligne, int nb_colonne)
{
    int valeur_max = 0;

    for (int i = 0; i < nb_ligne; i++)
    {
        for (int j = 0; j < nb_colonne; j++)
        {
            if (tab[i][j] > valeur_max)
            {
                valeur_max = tab[i][j];
            }

        }
    }


    return valeur_max;
}



//fonction principale
int main()
{

  int tab1D[5] = {22, 50,2,6,14};
  int tab2D[2][5] = {{22,50,2,6,14}, {2,5,2,6,94}};

  int nombre_max1D = max1D(tab1D, 5);
  int nombre_max2D = max2D(tab2D, 2, 5);

  printf("le nombre le plus grand de tab1D est %d\n", nombre_max1D );
  printf("le nombre le plus grand de tab2D est %d\n", nombre_max2D );
   


	return 0;
}



