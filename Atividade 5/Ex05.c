#include <stdio.h>
#include <locale.h>

int main(){

    int num1, num2, resto, num1Original, num2Original;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    num1Original = num1;
    num2Original = num2;

    do{
        resto = num1Original % num2Original;
        num1Original = num2Original;
        num2Original = resto;

    }while (resto != 0);

    printf("O MDC de %d e %d = %d ", num1, num2, num1Original);
    

    return 0;
}