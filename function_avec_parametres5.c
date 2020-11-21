#include <stdio.h>
#include <stdlib.h>


int inverser(int* nb1, int* nb2)  
{
    
    //faut faire un test pour voir si on a pas de pointeur NULL sinon on va crasher le programme
  
    if(nb1 == NULL || nb2==NULL)      
    {
        return -1;
    }

    int tmp = *nb1;
    *nb1 = *nb2;
    *nb2 = tmp;
    //pour pouvoir inverser les valeurs, il faut passer par des pointeurs.
    //sinon, ça fait un passage par copie

    return 0;
}




//fonction principale
int main()
{

  
    int nombre_1 = 12, nombre_2 = 89;
    printf("nombre_1 = %d\n", nombre_1 );
    printf("nombre_2 = %d\n", nombre_2 );

    //if(inverser(&nombre_1, NULL) == 0);   //Si dans le cas d'un NULL
    if(inverser(&nombre_1, &nombre_2) == 0);
    {
        printf("Inverser !\n");
    }         
    

    printf("nombre_1 = %d\n", nombre_1 );
    printf("nombre_2 = %d\n", nombre_2 );


	return 0;
}



