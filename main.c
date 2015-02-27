#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define N 4
#define REPUBBLICA 50

int etaMassima(int eta[], int COST);
int etaMinima(int eta[], int COST);
float etaMedia(int eta[], int COST);
int presidenti(int eta[], int COST, int REP);

int main(int argc, char** argv) {
    int array[N];
    int i,cont,massima,minima,capo;
    float media;
    
    printf("Inserisci l'età di %d persone\n",N);

    for(i=0;i<N;i++){
    cont=i+1;
    printf("Inserisci l'età della %da persona: \n",cont);
    scanf("%d",&(array[i]));
    }
   
    massima=etaMassima(array,N);
    minima=etaMinima(array,N);
    media=etaMedia(array,N);
    capo=presidenti(array,N,REPUBBLICA);
    
    printf("Età media: %f\n",media);
    printf("Età massima: %d\n",massima);
    printf("Età minima: %d\n",minima);
    printf("Numero di potenziali Presidenti della Reppubblica: %d",capo);
    return (EXIT_SUCCESS);
}

int etaMassima(int eta[], int COST){
    int massima=0;
    int i;
    for(i=0;i<COST;i++){
    if(eta[i]>massima)
            massima=eta[i];
    }
    return massima;
}
int etaMinima(int eta[], int COST){
    int minima=100;
    int i;
    for(i=0;i<COST;i++){
        if(eta[i]<minima)
            minima=eta[i];
    }
    return minima;
}
float etaMedia(int eta[], int COST){
    float media=0;
    int i;
    for(i=0;i<COST;i++){
        media+=eta[i];
    }
    media/=COST;
    return media;
}
int presidenti(int eta[], int COST, int REP){
    int presidenti=0;
    int i;
    for(i=0;i<COST;i++){
         if(eta[i]>=REP)
            presidenti++;
    }
    return presidenti;
}