
// 5) Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.

#include <stdio.h>

void main(){

	int vet1[8];
	int X, Y, soma;
	
	printf("Entre com os valores do vetor: \n");
	
	for (int i = 0; i < 8; i++){
	
		scanf("%d", &vet1[i]);
	
	}
	
	printf("Entre com o valor da primeira posição: ");
	scanf("%d", &X);
	printf("Entre com o valor da segunda posição: ");
	scanf("%d", &Y);
	
	soma = vet1[X] + vet1[Y];
	
	printf("A soma dos elementos é: %d\n", soma);

}
