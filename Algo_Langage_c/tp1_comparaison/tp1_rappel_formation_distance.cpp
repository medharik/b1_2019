// objectifs :
// mieux comprendre les variables
// mieux utiliser les entrees (lectures ) et sorties( affichage ou ecriture)
// mieux aprehender les traitements , calcul et affichage du resultat
// Exemple : Editer , en langage C , un programme permettant de 
// saisir le prix , et la qte et de'afficher le tht

#include<stdio.h>
main(){
	//declaration des variables (zone memoire pour stocker des valeurs)
float prix , qte , tht ;
printf("enter un prix : \n");
scanf("%f",&prix);

printf("entrer une qte : \n");
scanf("%f",&qte);

tht = prix * qte;
	
printf("le tht est %.2f DHS", tht);	
	
	
	
}
// exemple d'execution : 
// entrer un prix :
// 10
// entrer une qte : 
 //2
 // le tht est 20 DHS
