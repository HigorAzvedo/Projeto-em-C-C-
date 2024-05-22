#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct notasPrimeiraEtapa{
    float trabalhoPrimeiraEtapa; // 30pts
    float notaTotalPrimeiraEtapa;  // 30pts 
};

struct notasSegundaEtapa{
    float trabalho1; // 5pts
    float trabalho2; // 5pts
    float trabalho3; // 10pts
    float trabalho4; // 10pts
    float notaTotalSegundaEtapa;
};    

struct notasTerceiraEtapa{
    float trabalhoTerceiraEtapa; // 20pts
    float prova; // 20pts
    float notaTotalTerceiraEtaapa;
};

typedef struct aluno{
    int matricula;
    char nomeCompleto[101];
    char curso[50];
    float notaTotalSemestre;
    struct notasPrimeiraEtapa pe1;
    struct notasSegundaEtapa se1;
    struct notasTerceiraEtapa te1;
    struct aluno *prox;
}Aluno;

struct disciplina{
    char nomeDisciplina[50];
    int ano;
    char semestre[20];
    char professor[50];
};

Aluno* insereAluno(Aluno *l, int *cont);
void imprimeAluno (Aluno* l);
void limparDados(Aluno* l);

int main(){
    struct disciplina d1;

    printf("\n\n--Dados da Disciplina--\n");
    strcpy(d1.nomeDisciplina, "Disciplina: Algoritmos e Estruturas de Dados");
    printf("%s\n", d1.nomeDisciplina);

    strcpy(d1.professor, "Nome do professor: Jean Carlo Mendes");
    printf("%s\n", d1.professor);

    strcpy(d1.semestre, "5 semestre");
    printf("%s\n", d1.semestre);


    Aluno *listaAlunos = NULL;
    int continuar = 1;
    while(continuar == 1){
        listaAlunos = insereAluno(listaAlunos, &continuar);
    }

    imprimeAluno(listaAlunos);
    limparDados(listaAlunos);
    
    return 0;   
}

Aluno* insereAluno(Aluno *l, int *cont){

    Aluno *novo = (Aluno*) malloc(sizeof(Aluno));
    novo->prox = l;

    // for (int i = 0; i < 1; i++){
        
        printf("\n\n--Cadastro dos Alunos--\n");
        printf("\nNome completo do aluno: ");
        gets(novo->nomeCompleto);

        printf("Digite a matricula do aluno (somente numeros): ");
        int matriculaLida = 0;
        scanf("%d", &matriculaLida);
        getchar();

        if(matriculaLida == -1){
            *cont = -1;
            return l;
        }

        novo->matricula = matriculaLida;

        printf("Nome do curso do aluno : ");
        gets(novo->curso);

        /*   NOTAS PRIMEIRA ETAPA   */
        printf("\n\n--Digite as notas da primeira etapa--\n\n");

        do {
            printf("Nota do trabalho na primeira etapa (Valor 30 pontos): ");
            scanf("%f", &novo->pe1.trabalhoPrimeiraEtapa);
            if (novo->pe1.trabalhoPrimeiraEtapa < 0 ||novo->pe1.trabalhoPrimeiraEtapa > 30) {
                printf("Nota inválida!\n");
            }
        }while (novo->pe1.trabalhoPrimeiraEtapa < 0 || novo->pe1.trabalhoPrimeiraEtapa > 30);

        novo->pe1.notaTotalPrimeiraEtapa = novo->pe1.trabalhoPrimeiraEtapa;

        printf("\nNota Total na etapa: %.2f", novo->pe1.notaTotalPrimeiraEtapa);
        

        /*   NOTAS SEGUNDA ETAPA    */
        printf("\n\n--Digite as notas da segunda etapa--\n\n");

        do{
            printf("Digite a nota do trabalho 1 da segunda etapa (Valor 5 pontos): ");
            scanf("%f", &novo->se1.trabalho1);
            if(novo->se1.trabalho1 < 0 || novo->se1.trabalho1 > 5){
                printf("Nota invalida!\n");
            }  
        } while (novo->se1.trabalho1 < 0 || novo->se1.trabalho1 > 5);
        
        do{
            printf("Digite a nota do trabalho 2 da segunda etapa (Valor 5 pontos): ");
            scanf("%f", &novo->se1.trabalho2);
            if(novo->se1.trabalho2 < 0 || novo->se1.trabalho2 > 5){
                printf("Nota invalida!\n");
            } 
        } while (novo->se1.trabalho2 < 0 || novo->se1.trabalho2 > 5);
        
        do{
            printf("Digite a nota do trabalho 3 da segunda etapa (valor 10 pontos): ");
            scanf("%f", &novo->se1.trabalho3);
            if(novo->se1.trabalho3 < 0 || novo->se1.trabalho3 > 10){
                printf("Nota invalida!\n");
            }
        }while(novo->se1.trabalho3 < 0 || novo->se1.trabalho3 > 10);

        do{
            printf("Digite a nota do trabalho 4 da segunda etapa (valor 10 pontos): ");
            scanf("%f", &novo->se1.trabalho4);
            if(novo->se1.trabalho4 < 0 || novo->se1.trabalho4 > 10){
                printf("Nota invalida!\n");
            }
        }while(novo->se1.trabalho4 < 0 || novo->se1.trabalho4 > 10);

        
        novo->se1.notaTotalSegundaEtapa = novo->se1.trabalho1 + novo->se1.trabalho2 + novo->se1.trabalho3 + novo->se1.trabalho4;
        printf("\nNota total na etapa: %.2f pontos.", novo->se1.notaTotalSegundaEtapa);


        /*   NOTAS TERCEIRA ETAPA   */
        printf("\n\n--Digite as notas da terceira etapa--\n\n");

        do{
            printf("Digite a nota do trabalho da terceira etapa (Valor 20 pntos): ");
            scanf("%f", &novo->te1.trabalhoTerceiraEtapa);
            if(novo->te1.trabalhoTerceiraEtapa < 0 || novo->te1.trabalhoTerceiraEtapa > 20){
                printf("Nota Invalida\n");
            }
        }while(novo->te1.trabalhoTerceiraEtapa < 0 || novo->te1.trabalhoTerceiraEtapa > 20);

        do{
            printf("Digite a nota da prova da terceira etapa (Valor 20 pontos): ");
            scanf("%f", &novo->te1.prova);
            if(novo->te1.prova < 0 || novo->te1.prova > 20 ){
                printf("Nota Invalida\n");
            }
        }while(novo->te1.prova < 0 || novo->te1.prova > 20 );

        novo->te1.notaTotalTerceiraEtaapa = novo->te1.trabalhoTerceiraEtapa + novo->te1.prova;
        printf("\nNota total na etapa %.2f pontos", novo->te1.notaTotalTerceiraEtaapa);

        novo->notaTotalSemestre = novo->pe1.notaTotalPrimeiraEtapa + novo->se1.notaTotalSegundaEtapa + novo->te1.notaTotalTerceiraEtaapa;
        getchar();

        printf("\n");
    //}
    
    return novo;

}

void imprimeAluno (Aluno* l){
    Aluno* p;
    for (p = l; p != NULL; p = p->prox){
        printf("\nNome: %s\n", p->nomeCompleto);
        printf("Matricula: %d\n", p->matricula);
        printf("Curso: %s\n", p->curso);
        printf("Nota Final: %.2f\n", p->notaTotalSemestre);

        if(p->notaTotalSemestre >= 60){
            printf("Situacao Final: Aprovado\n");
        }else if(p->notaTotalSemestre >= 30){
            printf("Situacao Final: Exame Especial\n");
        }else{
            printf("Situacao Final: Reprovado\n");
        }
    }
        
}

void limparDados (Aluno* l){
    Aluno* p = l;
    while (p != NULL){
        Aluno* t = p->prox;
        free(p); 
        p = t; 
    }
}
