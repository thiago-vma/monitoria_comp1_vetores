
// 8) Faça um programa que preencha um vetor com 10 números reais. Em seguida, calcule e mostre na tela a quantidade de números negativos e a soma dos números positivos desse vetor.

#include <stdio.h>

void main(){

	float vet1[10];
    	int quant = 0;
    	float soma = 0.0;

    	printf("Entre com 10 numeros reais:\n");
    	
   	for (int i = 0; i < 10; i++) {
   	
        	printf("Numero %d: ", i + 1);
        	scanf("%f", &vet1[i]);
    
    }

	for (int i = 0; i < 10; i++) {
        
        	if (vet1[i] < 0){
        	
        	    	quant++;
        	    
        	}else{
            
			soma += vet1[i];
    		}
    	}

    printf("Quantidade de numeros negativos: %d\n", quant);
    printf("Soma dos numeros positivos: %.2f\n", soma);

}
