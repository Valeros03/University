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

	//inserimento nome del file dall'utente
	printf("Inserisci il nome del file: ");
	scanf("%s", nomeFile);

	//controllo apertura file
	if ((fPunti = fopen(nomeFile, "r")) == NULL) {
		printf("Errore nell'apertura del file: %s", nomeFile);
		exit(1);
	}

	//lettura dal file(termina quando legge 10 numeri o a fine file)
	while (!feof(fPunti) && i < N) {

		fscanf(fPunti, "%f%f", &ascissa, &ordinata);
		if (ascissa > 0) {
			vet[i].x = ascissa;
			vet[i].y = ordinata;
			i++;
			c++;
		}
	}
	fclose(fPunti);

	//stampda dei punti del vettore
	for (i = 0; i < c; i++) {

		printf("%f		%f\n", vet[i].x, vet[i].y);

	}

	//calcolo della distanza
	for (i = 1; i < c; i++) {

		distanza += sqrt((vet[i - 1].x - vet[i].x) * (vet[i - 1].x - vet[i].x) + (vet[i - 1].y - vet[i].y) * (vet[i - 1].y - vet[i].y));

	}

	//ricerca del massimo e minimo direttamente in un unico ciclo
	punto min = vet[0], max = vet[0];
	for (i = 1; i < c; i++) {

		if (vet[i].x > max.x) {
			max = vet[i];
		}
		else if (vet[i].x < min.x) {
			min = vet[i];
		}

	}

	//stampa dei risultati
	printf("La distanza del percorso e': %.1f\n", distanza);
	printf("Il punto di ascissa massima e': (%f , %f)\n", max.x, max.y);
	printf("Il punto di ascissa minima e': (%f , %f)\n", min.x, min.y);

	//inserisce il nome del file sul quale stampare i positivi
	printf("Inserire il nome del file in cui scrivere i punti di ascissa positiva: ");
	scanf("%s", nomeFile);

	//controlla se esiste il file con il nome inserito dall'utente
	if ((fPunti = fopen(nomeFile, "w")) == NULL) {
		printf("Impossibile aprire il file dal nome '%s': non è stato trovato", nomeFile);
		exit(1);
	}

	//stampa nel file le ascisse
	for (i = 0; i < c; i++) {
		fprintf(fPunti, "%.1f\n", vet[i].x);
	}
	fclose(fPunti);



}
