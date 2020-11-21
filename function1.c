#include <stdio.h>
#include <stdlib.h>


/*déclaration de la fonction avant la fonction "main()"
si on met la fonction après "main()", la fonction "main" ne comprendra pas,
car la fonction "ditHello" n'a pas été déclaré avant.
*/
void ditHello()
{

	printf("Hello world\n");
	printf("Formation C\n");
}




//fonction principale
int main()
{

	
	
	ditHello();
	ditHello();
	ditHello();

	return 0;
}



