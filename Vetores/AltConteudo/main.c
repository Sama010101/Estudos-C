#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		int i;
	int num1 [10];
	
	for (i = 0; i < 10; i++){
		printf("Digite o elemento da posicao %d:", i);
		scanf("%d", &num1[i]);
	}
	
	printf("\n\n");
	for (i = 0; i < 10; i++)
	{
		num1[i] = num1[i] * 3;
	}
	
	printf("\n\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", num1[i]);
	}
	printf("\n\n");
	
	return 0;
}