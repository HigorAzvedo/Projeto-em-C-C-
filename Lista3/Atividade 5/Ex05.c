/* Escreva um programa que seja capaz de ler três valores inteiros em três variáveis. Seu programa deve ser capaz de trocar os valores entre as variáveis. A função de troca de valores deve ser externa à função main e deve receber necessariamente, paramêtros com passagem por referência.
Exemplo de entrada:
Entrada: número 1 = 81, número 2 = 153, número 3 = 22
Saída: número 1 = 153, número 2 = 22, número 3 = 81
*/

#include <stdio.h>
#include <string.h>

int trocaValores(int *num1, int *num2, int *num3);

int main(){

    int numero1, numero2, numero3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);

    printf("\nOs numeros digitados foram: numero 1: %d, numero 2: %d, numero 3: %d \n\n", numero1 , numero2, numero3);

    trocaValores(&numero1, &numero2, &numero3);
    
    printf("Os numeros alterados sao: numero 1: %d, numero 2: %d, numero 3: %d ", numero1 , numero2, numero3);

    return 0;
}

int trocaValores(int *num1, int *num2, int *num3){
    int num1Original = *num1;
    *num1 = *num2;
    *num2 = *num3;
    *num3 = num1Original;

    return 0;
}
