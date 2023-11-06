#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		int i;
	int num1 [10];
	
	srand(time (NULL)); //Semente para randomizar o numero
	
	//Preencher o vetor com numeros aleatorios
	for (i = 0; i < 10; i++){
		num1 [i] = rand();
	}
	
	
	printf("\n\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", num1[i]);
	}
	printf("\n\n");
	
	return 0;
}