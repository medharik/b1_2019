#include<stdio.h>
main(){
	
	int a, b;

	printf("Entrer a \n");   //afficher a l'ecran : Entrer a et retour a la ligne 
	
	scanf("%i" , &a);   // ,,lire le nombre que l'utilisateur va saisir au clavier et le met dans la variable a (memoire a )
	
	printf(" Entrer b \n ");
	
	scanf("%i",&b);

if(a>b){
printf("a est plus grande que b  \n");
}else{
	printf("b est plus grande que a \n");	

}
	
	
}
