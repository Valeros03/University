/*Scrivere un programma che contenga le seguenti funzioni ed un opportuno main con un menù per
invocarle:
- Una funzione che permetta di leggere da input un vettore di interi
- una funzione avente come parametro in ingresso un vettore di interi che restituisca la somma
degli elementi del vettore;
- una funzione avente come parametro in ingresso un vettore di interi che restituisca il massimo
degli elementi del vettore;
- una funzione avente come parametro in ingresso un vettore di interi che restituisca il minimo
degli elementi del vettore;
- una funzione avente come parametro in ingresso un vettore di interi che restituisca la media
degli elementi del vettore;*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NMAX 100

void SommaElementi(int l_vet[], int numEl);
void TrovailMassimo(int l_vet[], int numEl);
void TrovailMinimo(int l_vet[], int numEl);
void CalcolaLaMedia(int l_vet[], int numEl);


int main(void) {

	int scelta;
	int vet[NMAX];
	int numeroElementi = 0;
	int fine = 0;

	while (fine != 1) {

		printf("Scegliere la funzione:\n1)Inserisci gli elementi del vettore\n2)Somma degli elementi del vettore\n3)Trova il massimo"
			" degli elementi del vettore\n4)Trova il minimo degli elementi del vettore\n5)Trova la media degli elementi del vettore\n6)Fine esecuzione\n\n");

		do {

			printf("Inserire un intero positivo che corrisponda ad un numero delle funzioni in elenco: ");
			scanf("%d", &scelta);

		} while (scelta < 0);

		switch (scelta) {
		case 1:
			numeroElementi = InserimentoElementi(vet);
			break;
		case 2:
			SommaElementi(vet, numeroElementi);
			break;
		case 3:
			TrovailMassimo(vet, numeroElementi);
			break;
		case 4:
			TrovailMinimo(vet, numeroElementi);
			break;
		case 5:
			CalcolaLaMedia(vet, numeroElementi);
			break;
		case 6:
			fine = 1;
			break;

		}
	}

}

int InserimentoElementi(int l_vet[]) {

	int numeroElementi;
	do {

		printf("Inserisci il numero di elementi del vettore (MAX %d): ", NMAX);
		scanf("%d", &numeroElementi);

	} while (numeroElementi < 0 || numeroElementi > NMAX);


	for (int i = 0; i < numeroElementi; i++) {
		printf("inserire l'elemento intero %d: ", i);
		scanf("%d", &l_vet[i]);
	}
	printf("\n");
	return numeroElementi;

}

void SommaElementi(int l_vet[], int numEl) {

	int somma = 0;
	

	for (int i = 0; i < numEl; i++)
		somma += l_vet[i];

	if (numEl == 0) {
		printf("Il vettore non contiene elementi\n\n");
	}

	else {
		printf("La somma degli elementi e': %d\n\n", somma);
	}
	
}
void TrovailMassimo(int l_vet[], int numEl) {

	int pos;

	if (numEl > 0) {
		int max = l_vet[0];
		for (int i = 1; i < numEl; i++) {

			if (max < l_vet[i]) {

				max = l_vet[i];
				pos = i;

			}
		}
		printf("Il massimo nel vettore e' il numero '%d' alla posizione %d\n\n", max, pos);
	}
	else {
		printf("Il vettore non contiene elementi\n\n");
	}

}

void TrovailMinimo(int l_vet[], int numEl) {

	

	if (numEl > 0) {

		int min = l_vet[0], pos = 0;

		for (int i = 1; i < numEl; i++) {

			if (min > l_vet[i]) {

				min = l_vet[i];
				pos = i;

			}
		}
		printf("Il minimo nel vettore e' il numero '%d' alla posizione %d\n\n", min, pos);
	}
	else {
		printf("Il vettore non contiene elementi\n\n");
	}

}

void CalcolaLaMedia(int l_vet[], int numEl) {

	if (numEl > 0) {
		int somma = 0;

		//avrei potuto usare la funzione somma in questo specifico (con le opportune modifiche)
		//ma ho implementato la funzione per avere la possibilità di riutilizzarla in un altro programma
		//senza dover ricopiare anche la funzione somma

		for (int i = 0; i < numEl; i++)
			somma += l_vet[i];

		printf("La media degli elementi nel vettore e': %f\n\n", (float)somma / numEl);
	}
	else {
		printf("Il vettore non contiene elementi\n\n");
	}

}

// Diveriti :) ♥
