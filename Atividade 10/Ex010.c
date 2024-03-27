#include <stdio.h>
#include <locale.h>

const int LINHAS = 5;
const int COLUNAS = 5;

int main(){

    int mat[LINHAS][COLUNAS], diagonalPrinc = 0, DiagonalSec = 1;

    for (int i = 1; i <= LINHAS; i++){
        for (int j = 1; j <= COLUNAS; j++){
            printf("Digite os valores para a matriz na LINHA %d e COLUNA %d - ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 1; i <= LINHAS; i++){
        for (int j = 1; j <= COLUNAS; j++){
            if(i == j){
                diagonalPrinc += mat[i][j];
            }
            
        }
    }

    for (int i = 1; i <= LINHAS; i++){
        for (int j = 1; j <= COLUNAS; j++){
            if(i + j == COLUNAS + 1){
                DiagonalSec *= mat[i][j];
            }
        }
    }

    printf("A soma da Diagonal Principal = %d \n", diagonalPrinc);
    printf("O produto da Diagonal Secundaria =  %d \n", DiagonalSec);

    return 0;
}