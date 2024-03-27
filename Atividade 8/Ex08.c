#include <stdio.h>
#include <locale.h>

const int MAX = 5;
int main(){


    int numeros[MAX], par[MAX], impar[MAX], contadorPar = 0, contadorImpar= 0;

    for(int i = 0; i < MAX; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[i]);

        if((numeros[i] % 2) == 0){
            par[contadorPar] = numeros[i];
            contadorPar++;
        }else{
            impar[contadorImpar] = numeros[i];
            contadorImpar++;
        }
    }

    printf("Os numeros pares sao: ");

    for(int i = 0; i < contadorPar; i++){
        if(i < contadorPar-1){
            printf("%d, ", par[i]);
        }else{
            printf("%d ", par[i]);
        }
        
    }

    printf("\nOs numeros impares sao: ");

    for(int i = 0; i < contadorImpar; i++){

        if(i < contadorImpar-1){
            printf("%d, ", impar[i]);
        }else{
            printf("%d ", impar[i]);
        }
        
    }

    return 0;

}