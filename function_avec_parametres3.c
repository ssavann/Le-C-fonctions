#include <stdio.h>
#include <stdlib.h>

//déclaration de la fonction "somme"
void anniversaire(int var)  //int var = 3
{
    
    var++;                  // 3 + 1 = 4
    printf("%d\n", var);    //%d = 4

    //c'est donc, un passage par copie

}




//fonction principale
int main()
{

    int age = 3;
	anniversaire(age); //age = 3
    //si on fait un printf ici, cela va afficher age=3 et non 4
	
	

	return 0;
}



