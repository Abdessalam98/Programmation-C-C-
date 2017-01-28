#include <stdio.h>
#include <stdlib.h>
void main(){
	int x,i,somme=0;
	printf("Calcul du carré d'un nombre \n");
	do {
		printf("Veuillez saisir un nombre positif :\n");
		scanf("%d",&x);

	}while(x<=0);

	for (i=1; i<(2*x);i++ ) {
		if (i %2 != 0){
		somme += i;
		}
	}
	printf("Le carré du nombre %d est : %d\n",x,somme );

}