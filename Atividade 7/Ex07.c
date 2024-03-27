#include <stdio.h>
#include <locale.h>

const int n = 10;


int main(){

    float notas[n], notasAcimaDaMedia[n], media, soma;
    int i;
    int contador = 0;

    for (i = 0; i < n; i++){

        printf("Digite sua nota %d: \n", i + 1);
        scanf("%f", &notas[i]);
        if(notas[i] < 0 || notas[i] > 10){
            printf("Nota Invalida! Digite um valor entre 0 e 10. \n");
            i--;
        }
         
    }

    for (i = 0; i < n; i++){
        soma += notas[i];
        media = soma / n;
    }

    printf("A media de todas as notas foram: %.2f \n\n", media);

    for(i = 0; i < n; i++){

        if(notas[i] >= 6.0){
            notasAcimaDaMedia[contador] = notas[i];
            contador++;
        }

    }

    for(i = 0; i < contador; i++ ){
        printf("\n A nota %d foi acima da media =  %.2f ", i + 1, notasAcimaDaMedia[i]);

    }

    return 0;
}