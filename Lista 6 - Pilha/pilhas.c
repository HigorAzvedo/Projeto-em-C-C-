#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct Pilha {
    int ultimaCaixa;
    int vet[MAX];
} Pilha;

Pilha* pilha_cria(void);
void pilha_push(Pilha *p, int v);
int pilha_pop(Pilha *p);
void recebeCaixaNoDeposito(Pilha *a, Pilha *b, Pilha *c, int caixa);
void exibe_pilha(Pilha *p);

int main() {
    Pilha *A = pilha_cria();
    Pilha *B = pilha_cria();
    Pilha *C = pilha_cria();
    int caixa;

    printf("\n--Sistema de empilhamento--\n\n");

    while (1) {
        printf("Escolha uma caixa para empilhar (pesos de 3t, 5t, 7t) ou digite 1 para sair: ");
        scanf("%d", &caixa);

        if (caixa == 3 || caixa == 5 || caixa == 7) {
            recebeCaixaNoDeposito(A, B, C, caixa);
        } else if (caixa == 1) {
            
            break;
        } else {
            printf("Erro: escolha uma caixa valida ou digite 1 para sair.\n");
        }
    }

    exibe_pilha(A);    

    free(A);
    free(B);
    free(C);

    return 0;
}

Pilha* pilha_cria(void) {
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->ultimaCaixa = 0;
    return p;
}

void pilha_push(Pilha *p, int v) {
    if (p->ultimaCaixa < MAX) {
        p->vet[p->ultimaCaixa] = v;
        p->ultimaCaixa++;
    } else {
        printf("Pilha cheia\n");
        exit(1);
    }
}

int pilha_pop(Pilha *p) {
    if (p->ultimaCaixa == 0) {
        printf("Pilha vazia\n");
        exit(1);
    }
    p->ultimaCaixa--;
    return p->vet[p->ultimaCaixa];
}

void recebeCaixaNoDeposito(Pilha *a, Pilha *b, Pilha *c, int caixa) {
    Pilha *temp = pilha_cria();

    while (a->ultimaCaixa > 0 && a->vet[a->ultimaCaixa - 1] < caixa) {
        int v = pilha_pop(a);
        if (v == 5) {
            pilha_push(b, v);
        } else if (v == 3) {
            pilha_push(c, v);
        } else {
            pilha_push(temp, v);
        }
    }

    pilha_push(a, caixa);

    while (temp->ultimaCaixa > 0) {
        pilha_push(a, pilha_pop(temp));
    }
    while (b->ultimaCaixa > 0) {
        pilha_push(a, pilha_pop(b));
    }
    while (c->ultimaCaixa > 0) {
        pilha_push(a, pilha_pop(c));
    }

    free(temp);
}

void exibe_pilha(Pilha *p) {
    printf("Pilha: ");
    for (int i = 0; i < p->ultimaCaixa; i++) {
        printf("%d ", p->vet[i]);
    }
    printf("\n");
}
