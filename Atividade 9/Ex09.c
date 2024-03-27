#include <stdio.h>
#include <locale.h>


const int LINHAS = 4;
const int COLUNAS = 4;
int main(){

    int numero, mat[LINHAS][COLUNAS], resultado[LINHAS][COLUNAS];

    printf("Digite um numero para ser o produto da matriz: ");
    scanf("%d", &numero);

    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){ 
            printf("Digite um valor para a linha %d: culuna %d: ", i, j);
            scanf("%d", &mat[i][j]);    
        }
    }

    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            resultado[i][j] = numero * mat[i][j];
        }
    }

    for(int i = 0; i < LINHAS; i++){
        printf("\n");
        for (int j = 0; j < COLUNAS; j++){
            printf("%4d", resultado[i][j]);
        }
        
    }
    
    return 0;

}