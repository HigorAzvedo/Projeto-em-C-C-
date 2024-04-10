#include <stdio.h>
#include <locale.h>

const int num = 5;
int main(){
   
    int numero[num];
    int i, soma = 0;

    for (i = 0; i < num; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero[i]);
    }
    
    for (i = 0; i < num; i++){
        soma += numero[i];
    }

    printf("A soma de todos os numeros digitados é =  %d ", soma);

    return 0;
}