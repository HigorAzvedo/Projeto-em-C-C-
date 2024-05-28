#include <stdio.h>
#include <stdlib.h>

void mostraVetor (int *V, int N) {

    for(int i = 0; i < N; i++) {
            //printf("pos i = %d | valor %d \n", i, V[i]);

        if(i==0) {
           printf("[%d, ", V[i]);
        }
        else if(i==N-1) {
           printf("%d]", V[i]);
        }
        else {
            printf("%d, ", V[i]);
        }
    }
}

//Bubble Sort
void bubbleSort (int *V, int N) {
    int i, continua, aux, fim = N;
    do{
        continua = 0;
        for (i = 0; i < fim-1; i++) {
            if(V[i] > V[i+1]) {
                aux = V[i];
                V[i] = V [i+1];
                V[i+1] = aux;
                continua = i;
            }
        }
        fim--;
    } while(continua !=0);
}

//Selection Sort
void selectionSort (int *V, int N) {
    int i, j, menor, troca;
    for(i=0; i<N-1; i++) {
        menor = i;
        for(j = i + 1; j < N; j++) {
            if(V[j] < V[menor]) {
                menor = j;
            }
        }
        if(i!=menor) {
            troca = V[i];
            V[i] = V[menor];
            V[menor] = troca;
        }
    }
}

//Insertion Sort
void insertionSort (int *V, int N) {
    int i, j, atual;
    for (i=1; i < N; i++){
        atual = V[i];
        for(j = i; ((j>0)&& (atual <  V[j-1])); j-- ) {
            V[j] = V[j-1];
        }
        V[j] = atual;
    }
}

//Merge Sort
void merge (int *V, int inicio, int meio, int fim){
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim-inicio+1;
    p1 = inicio;
    p2 = meio + 1;

    temp = (int *) malloc(tamanho*sizeof(int));
    if(temp != NULL) {
        for(i=0; i<tamanho; i++){
            if(!fim1 && !fim2){
                if(V[p1] < V[p2]) {
                    temp[i] = V[p1++];
                }
                else {
                    temp[i] = V[p2++];
                }
                if(p1>meio) {
                    fim1=1;
                }
                if(p2>fim){
                    fim2=1;
                }
            }
            else{
                if(!fim1) {
                    temp[i] = V[p1++];
                }
                else {
                    temp[i] = V[p2++];
                }
            }
        }
         for(j=0, k = inicio; j < tamanho; j++, k++) {
            V[k] = temp[j];
        }
    }
        free(temp);
}

void mergeSort (int *V, int inicio, int fim) {
    int meio;
    if(inicio < fim) {
        meio = floor((inicio+fim)/2);
        mergeSort(V, inicio, meio);
        mergeSort(V, meio+1, fim);
        merge(V, inicio, meio, fim);
    }
}

//Quick Sort
int particiona (int *V, int inicio, int final) {
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = final;
    pivo = V[inicio];
    while(esq < dir){
        while(esq<=final && V[esq] <= pivo) {
            esq++;
        }
        while (dir>=0 && V[dir]>pivo) {
            dir--;
        }
        if(esq < dir){
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
    }
    V[inicio] = V[dir];
    V[dir] = pivo;
    return dir;
}

void quickSort(int *V, int inicio, int fim) {
    int pivo;
    if(fim>inicio) {
        pivo = particiona(V, inicio, fim);
        quickSort(V, inicio, pivo-1);
        quickSort(V, pivo+1, fim);
    }
}


//busca Linear
int buscaLinear(int *V, int N, int elementoProcurado) {
    int i;
    for (i = 0; i < N; i++){
        if(elementoProcurado == V[i]) {
            return V[i]; //retorna o próprio elemento
        }
    }
     return -1; //Não encontrado
}

//busca Ordenada
int buscaOrdenada(int *V, int N, int elementoProcurado) {
    int i;
    for (i = 0; i < N; i++){
        if(elementoProcurado == V[i]) {
            return V[i]; //retorna o próprio elemento
        }
        else {
            if(elementoProcurado < V[i]) {
               return -1;
            }
        }
    }
     return -1; //Não encontrado
}

int buscaBinaria (int *V, int N, int elementoProcurado){
    int i, inicio, meio, final;
    inicio = 0;
    final = N-1;
    while(inicio <= final) {
        meio = (inicio + final)/2;
        if(elementoProcurado < V[meio]){
            final = meio-1; //busca na metade esquerda
        }
        else {
            if(elementoProcurado > V[meio]) {
                inicio = meio +1; //busca na metade direita
            }
            else {
                return V[meio];
            }
        }
    }
    return -1; //Não encontrado
}

int main()
{
    int N = 5;
    //int N = 7;//merge
    int vetor [] = {6,7,2,3,5};
    //int vetor [] = {23,4,67,-8,21};
    //int vetor [] = {23,4,67,-8,90, 54, 21}; //merge e quick
    // printf("Vetor Original: \n");
    // mostraVetor(vetor, N);
    bubbleSort(vetor, N);
    // selectionSort(vetor, N);
    //insertionSort(vetor, N);
    //mergeSort(vetor, 0, N-1);
    // quickSort(vetor, 0, N-1);
    printf("\nVetor Ordenado: \n");
    mostraVetor(vetor, N);
    // int res = -1;
    // int el = 9;
    //res = buscaLinear(vetor, 5, el);
    //res = buscaOrdenada(vetor, 5, el);
    // res = buscaBinaria(vetor, 5, el);
    // if(res>=0) {
    //     printf("\nElemento %d encontrado!", res);
    // }
    // else {
    //     printf("\nElemento %d NAO encontrado!", el);
    // }

    return 0;
}