
// 1) Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos.

#include <stdio.h>

void main() {

	int vet1[5];  

	printf("Entre com os valores desejados: ");
	
	for (int i = 0; i < 6; i++){
	
		scanf("%d", &vet1[i]);
	
	}

	printf("Os valores são:\n");

	for (int i = 0; i < 6; i++){
	
		printf("Valor %d: %d\n", i + 1, vet1[i]);
	
	}
}
