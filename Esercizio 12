#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*Scrivere un programma in linguaggio C che, dati tre valori interi a, b e c rappresentanti i coefficienti
dell'equazione di secondo grado ax^2 + bx + c = 0, calcoli e visualizzi le soluzioni di tale equazione,
considerando anche i casi particolari in cui qualche coefficiente (a oppure a e b) siano pari a zero.
Supporre di disporre dell'operatore sqrt(arg) (incluso nella libreria math.h) che restituisce il modulo
della radice quadrata di arg*/

/*input: a,b,c 
output: sol 
considerare coeff pari a 0*/

int main() {
	float a,b,c;
	float d;
	float sol,sol1;
	float p;

	printf("scrivi a, b e c dell'equazione ax^2 + bx + c = 0\n");
	scanf("%f %f %f", &a, &b, &c);
	

	if (a != 0) {
		/*formula soluzioni*/
		/*calcolo delta*/
		d = pow(b, 2) - 4 * a * c;


		if (d < 0) {
			printf("l'equazione non ha soluzioni\n");
		}
		else {
			sol = (-b + sqrt(d)) / 2 * a;
			sol1 = (-b - sqrt(d)) / 2 * a;

			if (sol == sol1) {
	
				printf("le soluzioni sono coincidenti e sono %.2f=%.2f", sol,sol);
			} else {
				
				printf("le soluzioni sono %f e %f\n", sol, sol1);
			}
		}
	} else {
		sol = -c / b;
		printf("la soluzione dell'equazione è %f\n", sol);
	}
	

	

}
