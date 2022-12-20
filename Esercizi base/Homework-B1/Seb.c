#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define N 10

typedef struct {
	float x, y;
}punto;


int main(void) {

	FILE* fPunti;
	char nomeFile[21];
	punto vet[N];
	int i = 0;
	float ascissa;
	float ordinata;
	float distanza = 0;
	int c = 0;

	printf("Inserisci il nome del file: ");
	scanf("%s", nomeFile);


	if ((fPunti = fopen(nomeFile, "r")) == NULL) {
		printf("Errore nell'apertura del file: %s",nomeFile);
		exit(1);
	}
	while (!feof(fPunti) && i<N) {
		fscanf(fPunti, "%f%f", &ascissa, &ordinata);
		if (ascissa > 0) {
			vet[i].x = ascissa;
			vet[i].y = ordinata;
			i++;
			c++;
 		}
	}
	fclose(fPunti);

	for (i = 0; i < c; i++) {
		printf("%f		%f\n", vet[i].x, vet[i].y);
	}
	
	for (i = 0; i < c; i++) {
		distanza += sqrt((vet[i].x * vet[i].x) + (vet[i].y * vet[i].y));
	}

	printf("La distanza del percorso e': %.1f", distanza);



}
