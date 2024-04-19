/* Escreva um programa em C que seja capaz de ler uma palavra e determinar o seu tamanho (quantidade de caracteres). A contagem de caracteres deve ser realizada, necessariamente, com o uso de ponteiros. Não se pode usar a função strlen e nem tampouco os índices diretos do vetor para a contagem.*/


#include <stdio.h>

int contadorDeCaractere(char *palavra, int *tamanho);

int main(){

    char palavra[50];
    int qtdDeCaractere = 0;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    contadorDeCaractere(palavra, &qtdDeCaractere);

    printf("A quantidade de caracteres da palavra e: %d", qtdDeCaractere);

    return 0;
}

int contadorDeCaractere(char *palavra, int *tamanho){

    char *p = palavra;
    int contagem = 0;

    while(*p != '\0'){
        contagem++;
        p++;  
    }
    
    *tamanho = contagem;

    return 0;

}    

