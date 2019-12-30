#include<stdio.h>
main(){
	
	int a, b;

	printf("Entrer a \n");   //afficher a l'ecran : Entrer a et retour a la ligne 
	
	scanf("%i" , &a);   // ,,lire le nombre que l'utilisateur va saisir au clavier et le met dans la variable a (memoire a )
	
	printf(" Entrer b \n ");
	
	scanf("%i",&b);

if(a>b){
	
printf("%i est plus grande que %i \n",a,b);
}
 
if(b>a)
{
	printf("%i est plus grande que %i \n",b,a);	
}

if(b==a)
{
	printf("%i est egale a  %i \n",b,a);	
}
	
	
}
