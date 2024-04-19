/* Escreva um programa que contenha uma única função que seja capaz de calcular a soma, a diferença, a divisão ou produto entre dois números. A leitura dos dois números, a leitura da operação desejada pelo usuário e a
impressão do resultado devem ser feitas pela função principal. A variável que receberá o resultado da operação deverá ser uma variável global. A função deve receber quatro parâmetros: numero1, numero2, operação e resultado.*/

#include <stdio.h>
#include <string.h>

float calculadorDeNumeros(int a, int b, char operacao, float *resultado );

int main(){

    int num1, num2;
    float resultado;
    char operacao;
  
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    printf("Digite a icone da operacao desejada ");
    scanf(" %c", &operacao);

    calculadorDeNumeros(num1, num2, operacao, &resultado);

    printf("O resultado da operacao e: %.2f", resultado );

    return 0;
}

float calculadorDeNumeros(int a, int b, char operacao, float *resultado) {
    if(operacao == '+'){
        *resultado = a + b;
    }else if(operacao == '-'){
        *resultado = a - b;
    }else if(operacao == '/'){
        *resultado = a / b;
    }else if(operacao == '*'){
        *resultado = a * b;
    }

    return 0.0;

}
