#include<stdio.h>
main(){
float prix,qte,tht,taux;
printf("entrer prix\n");
scanf("%f",&prix);
printf("entrer qte\n");
scanf("%f",&qte);
tht=prix*qte;
printf("tht est %f\n",tht);
printf("entrer le taux de reduction\n");
scanf("%f",&taux);
tht=tht*(1-taux/100);
printf("tht apres reduction est %f\n",tht);





}

;

