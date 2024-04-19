/* Escreva um programa que contenha uma função (separada da função main) que receba dois números e retorne verdadeiro (1) ou falso (0) indicando se o primeiro número é divisível pelo segundo. A função principal deve imprimir uma mensagem apropriada de acordo com o resultado (retorno) da função.*/

#include <stdio.h>
#include <string.h>

int verificacaoDeNumero(int a, int b);

int main(){

    int num1, num2;
  
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    verificacaoDeNumero(num1, num2);

    return 0;
}

int verificacaoDeNumero(int a, int b){
    if(a % b == 0){
        printf("Os numeros sao divisiveis.");
    }else{
        printf("Os numeros nao sao divisiveis");
    }

    return 0;
}
