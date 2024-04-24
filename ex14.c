
// 14) Faça um programa que calcule o desvio-padrão d de um vetor V contendo n números em que m é a média desse vetor. Considere n = 10. O vetor v deve ser lido do teclado.

#include <stdio.h>
#include <math.h>

void main(){

	float V[10];
	float media, desvio, somatoria, soma;
	
	printf("Entre com os 10 números para calclar o desvio padrão: \n");
	
	for(int i = 0; i < 10; i++) {
        	
        	printf("Número %d: ", i + 1);
        	scanf("%f", &V[i]);
        	soma += V[i];
    	}

    	media = soma / 10.0;

    	for(int i = 0; i < 10; i++) {
        
        	somatoria += pow(V[i] - media, 2); 
    	}

    	desvio = sqrt(somatoria / 9); 

    	printf("O desvio-padrão é: %.2f\n", desvio);

}
