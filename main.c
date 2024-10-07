#include <stdio.h>

int main() {

    float voto,media;
    float votoTotale = 0;
    int i = 1;
    int nVoti = 0;


    while(i == 1) {
        printf("inserisci il voto:\n");
        scanf("%f", &voto);
        votoTotale += voto;
        printf("inserisci 1 per continuare o 0 per uscire:\n");
        scanf("%d",&i);
        nVoti++;
    }

    media = votoTotale/nVoti;

    printf("la media e' %.2f", media);

    return 0;
}
