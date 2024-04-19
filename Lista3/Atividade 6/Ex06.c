/* Faça um programa que leia do teclado 10 números inteiros e armazene-os em um vetor. Em seguida seu
programa deve receber um número para ser buscado no vetor. Seu programa deve informar se o número informado
para ser buscado está ou não presente no vetor. O mecanismo de busca do valor deve ser escrito em uma função
separada da função main e deve, necessariamente, realizar a busca usando ponteiros..*/

#include <stdio.h>
#include <string.h>

const int MAX = 10;

int procurarNumero(int *num, int *numEncontrado);

int main(){

    int num, numEncontrado;

    procurarNumero(&num, &numEncontrado);

    if(numEncontrado == num){
        printf("\nO numero %d esta no vetor.", num);
    }else{
        printf("\nO numero %d nao foi encontrado no vetor.", num);
    }

    return 0;
}

int procurarNumero(int *num, int *numEncontrado){

    int vetor[MAX]; 
    int *p, numero;

    for(int i = 0; i < MAX; i++){
        printf("Digite o numero da posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um numero para ser procurado no vetor: ");
    scanf("%d", &numero);

    *num = numero;
    p = vetor;

    int contador = 0;
    while(contador <= MAX){
        
        if (*p == numero){
            *numEncontrado = *p;
            return 0;
        }
        p++;
        contador++;
    }

    *numEncontrado = -1;

    return 0;

}
