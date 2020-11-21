#include <stdio.h>
#include <stdlib.h>

//déclaration de la fonction "somme"
void somme(int var1, int var2)
{
    int total = var1 + var2;
    printf("%d + %d = %d\n", var1, var2, total);

}




//fonction principale
int main()
{

	int ma_variable = 2;

    somme(3,1);
    somme(4,ma_variable);
	
	

	return 0;
}



