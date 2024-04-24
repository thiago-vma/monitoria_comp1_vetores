
// 12) Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais e os escreva na tela.

#include <stdio.h>

void main(){

	int vet[10];
	
	printf("Entre com os numeros:\n");
    
    	for (int i = 0; i < 10; i++) {
        
        	printf("Elemento %d: ", i + 1);
        	scanf("%d", &vet[i]);
    	}
    
    	for (int i = 0; i < 10; i++) {
        	
        	for (int j = i + 1; j < 10; j++){

			if(vet[i] == vet[j]){
			
				printf("Número igual: %d\n", vet[i]);
				break;
			}

		}
    	}

}
