
// 13) Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usuário digite um número que já foi digitado, o programa deverá pedir a ele para digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.

#include <stdio.h>

void main(){

	int vetor[10];
	int num, repetido;

    	printf("Digite 10 numeros diferentes:\n");
    
    	for (int i = 0; i < 10; i++) {
    	
        	repetido = 0; // Flag para saber se o número já foi digitado
        
        	do {
            
            		printf("Numero %d: ", i + 1);
            		scanf("%d", &num);
            		repetido = 0; // Inicializando a flag 
            
            		for (int j = 0; j < i; j++) {
                
                		if (vetor[j] == num) {
                    			repetido = 1;
                    			printf("Numero repetido, digite outro numero.\n");
                    			break;
                		}
            		}
        	} while (repetido);
        
        	vetor[i] = num;
    	}

	printf("\n");
    	printf("Vetor:\n");
    	
    	for (int i = 0; i < 10; i++) {
        	
        	printf("%d ", vetor[i]);
    	}
    	printf("\n");
}
