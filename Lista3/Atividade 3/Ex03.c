/* Escreva um programa que contenha uma função que receba um vetor de 10 elementos e retorne a média ponderada dos valores armazenados nesse vetor. Os pesos de cada valor são dados pelo seu índice no vetor. A leitura dos valores do vetor bem como o cálculo da média devem ser escritos em funções separadas da função main.*/

#include <stdio.h>
#include <string.h>

const int MAX = 10;

float mediaPonderada(float *media);

int main(){

    float calcMedia;
    mediaPonderada(&calcMedia);

    printf("A media ponderada do vetor e: %.2f" , calcMedia);

    return 0;
}

float mediaPonderada(float *media){
    int vetor[MAX];
    float somaDosValoresDoVetor = 0, somaDosPesos = 0;
    
    for(int i = 0; i < MAX; i++){
       printf("Digite valores para um vetor na posicao %d: ", i);
       scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < MAX; i++){
        somaDosValoresDoVetor += vetor[i] * i;
        somaDosPesos += i;
    }
    
    *media = somaDosValoresDoVetor / somaDosPesos;

    return 0.0;
   
}