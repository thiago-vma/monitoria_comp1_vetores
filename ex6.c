
// 6) Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela quantos valores pares foram armazenados nesse vetor.

#include <stdio.h>

void main(){

	int vet1[10], cont = 0;
	
	printf("Entre com os valores do vetor: \n");
	
	for (int i = 0; i < 10; i++){
	
		scanf("%d", &vet1[i]);
	
	}
	
	for (int i = 0; i < 10; i++){
	
		if(vet1[i]%2 == 0){
		
			cont++;
		
		}
	
	}
	
	printf("Números pares: %d\n", cont);
	

}
