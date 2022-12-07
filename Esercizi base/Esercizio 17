#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Si scriva un programma in linguaggio C per poter analizzare una sequenza di numeri.
Dati N numeri interi letti da tastiera si vogliono calcolare e stampare su schermo diversi risultati:
• quanti sono i numeri positivi, nulli e negativi
• quanti sono i numeri pari e dispari
• se la sequenza dei numeri inseriti è crescente, decrescente oppure né crescente né decrescente.
Suggerimento. Una sequenza è crescente se ogni numero è maggiore del precedente, decrescente
se ogni numero è minore del precedente, né crescente né decrescente in tutti gli altri casi.

I: N
O: 
-pos, nul, neg
-p, d
-sequenza crescente, decrescente, cost, nè screscente nè decrescente


*/

int main() {
	int N;
	int n, nn;

	int pos = 0;
	int null = 0;
	int neg = 0;

	int p = 0;
	int d = 0;

	int cresc = 0;
	int decresc = 0;
	int cost = 0;
	int x = 0;

	printf("quanti numeri vuoi inserire?\n");
	scanf("%d", &N);
	printf("scrivi una sequenza di numeri \n");

	for (int i = 0; i < N; i++) {
		
		scanf("%d", &n);
		//numero pos, neg e null
		if (n > 0) {
			pos++;
		}
		else {
			if (n < 0) {
				neg++;
			}
			else {
				null++;
			}
		}
		//num pari o dispari
		if (n % 2 == 0) {
			p++;
		}
		else d++;

		//scescente, decrescente, costante, nè crescente nè decrescente
		if (i > 0) {
			if (n>nn) {
				cresc++;
			}
			else {
				if (n < nn) {
					decresc++;
				}
				else {
					if (n == nn) {
						cost++;
					} 
				}
			}
		}
		nn = n;
	}


	printf("positivi=%d\nnegativi=%d\nnulli=%d\n", pos, neg, null);
	printf("pari=%d\ndispari=%d\n", p, d);
	//printf("cresc=%d\ndecresc=%d\ncost=%d\n", cresc, decresc, cost);

	//ho messo N-1 perchè nel conto dei cresc non viene considerato il primo numero nel FOR
	if (cresc > 0 && cresc == N-1) 
	{ printf("la funzione è crescente"); }
	if (decresc > 0 && decresc == N-1) 
	{ printf("la funzione è decrescente"); }
	if (cost > 0 && cost == N-1) 
	{ printf("la funzione è costante"); }

}
