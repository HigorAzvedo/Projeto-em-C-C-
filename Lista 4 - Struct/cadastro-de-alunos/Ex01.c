#include <stdio.h>
#include <string.h>
const int MAX = 10;

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

struct aluno{
    int matricula;
    char nomeCompleto[101];
    char curso[50];
    float notaTotalSemestre;
    struct notasPrimeiraEtapa pe1;
    struct notasSegundaEtapa se1;
    struct notasTerceiraEtapa te1;
};

struct disciplina{
    char nomeDisciplina[50];
    int ano;
    char semestre[20];
    char professor[50];
    struct aluno alunos[10];
};

void preenchendoDadosDosAlunos();
void recebendoDadosDosAlunos(struct aluno *p);

int main(){

    /*   DADOS DA DISCIPLINA   */
    struct disciplina d1;

    printf("\n\nDados da disciplina\n\n");

    strcpy(d1.nomeDisciplina, "Disciplina: Algoritmos e Estruturas de Dados");
    printf("%s\n", d1.nomeDisciplina);

    strcpy(d1.professor, "Nome do professor: Jean Carlo Mendes");
    printf("%s\n", d1.professor);

    strcpy(d1.semestre, "5 semestre");
    printf("%s\n\n", d1.semestre);

    preenchendoDadosDosAlunos();
    
    return 0;
}


void preenchendoDadosDosAlunos(){
    struct aluno alunos[MAX];
    struct aluno *ponteiroAluno; // ponteiro para a struct aluno
    ponteiroAluno = alunos; 
    
    /*    DADOS DO ALUNO    */
    printf("--DIGITE OS DADOS DOS ALUNOS--\n");

    for (int i = 0; i < MAX; i++){
        printf("\n\nCadastro do Aluno %d\n", i + 1);
        printf("\nNome completo do aluno %d: ", i + 1);
        gets(alunos[i].nomeCompleto);

        printf("Digite a matricula do aluno %d (somente numeros) : ", i + 1);
        scanf("%d", &alunos[i].matricula);
        getchar();

        printf("Nome do curso do aluno %d: ", i + 1);
        gets(alunos[i].curso);


        /*   NOTAS PRIMEIRA ETAPA   */
        printf("\n\n--Digite as notas da primeira etapa--\n\n");

        do {
            printf("Nota do trabalho na primeira etapa (Valor 30 pontos): ");
            scanf("%f", &alunos[i].pe1.trabalhoPrimeiraEtapa);
            if (alunos[i].pe1.trabalhoPrimeiraEtapa < 0 || alunos[i].pe1.trabalhoPrimeiraEtapa > 30) {
                printf("Nota inválida!\n");
            }
        }while (alunos[i].pe1.trabalhoPrimeiraEtapa < 0 || alunos[i].pe1.trabalhoPrimeiraEtapa > 30);

        alunos[i].pe1.notaTotalPrimeiraEtapa = alunos[i].pe1.trabalhoPrimeiraEtapa;
        

        /*   NOTAS SEGUNDA ETAPA    */
        printf("\n\n--Digite as notas da segunda etapa--\n\n");

        do{
            printf("Digite a nota do trabalho 1 da segunda etapa (Valor 5 pontos): ");
            scanf("%f", &alunos[i].se1.trabalho1);
            if(alunos[i].se1.trabalho1 < 0 || alunos[i].se1.trabalho1 > 5){
                printf("Nota invalida!\n");
            }  
        } while (alunos[i].se1.trabalho1 < 0 || alunos[i].se1.trabalho1 > 5);
        
        do{
            printf("Digite a nota do trabalho 2 da segunda etapa (Valor 5 pontos): ");
            scanf("%f", &alunos[i].se1.trabalho2);
            if(alunos[i].se1.trabalho2 < 0 || alunos[i].se1.trabalho2 > 5){
                printf("Nota invalida!\n");
            } 
        } while (alunos[i].se1.trabalho2 < 0 || alunos[i].se1.trabalho2 > 5);
        
        do{
            printf("Digite a nota do trabalho 3 da segunda etapa (valor 10 pontos): ");
            scanf("%f", &alunos[i].se1.trabalho3);
            if(alunos[i].se1.trabalho3 < 0 || alunos[i].se1.trabalho3 > 10){
                printf("Nota invalida!\n");
            }
        }while(alunos[i].se1.trabalho3 < 0 || alunos[i].se1.trabalho3 > 10);

        do{
            printf("Digite a nota do trabalho 4 da segunda etapa (valor 10 pontos): ");
            scanf("%f", &alunos[i].se1.trabalho4);
            if(alunos[i].se1.trabalho4 < 0 || alunos[i].se1.trabalho4 > 10){
                printf("Nota invalida!\n");
            }
        }while(alunos[i].se1.trabalho4 < 0 || alunos[i].se1.trabalho4 > 10);

        
        alunos[i].se1.notaTotalSegundaEtapa = alunos[i].se1.trabalho1 + alunos[i].se1.trabalho2 + alunos[i].se1.trabalho3 + alunos[i].se1.trabalho4;
        printf("\nNota total na etapa %.2f pontos.", alunos[i].se1.notaTotalSegundaEtapa);


        /*   NOTAS TERCEIRA ETAPA   */
        printf("\n\n--Digite as notas da terceira etapa--\n\n");

        do{
            printf("Digite a nota do trabalho da terceira etapa (Valor 20 pntos): ");
            scanf("%f", &alunos[i].te1.trabalhoTerceiraEtapa);
            if(alunos[i].te1.trabalhoTerceiraEtapa < 0 || alunos[i].te1.trabalhoTerceiraEtapa > 20){
                printf("Nota Invalida\n");
            }
        }while(alunos[i].te1.trabalhoTerceiraEtapa < 0 || alunos[i].te1.trabalhoTerceiraEtapa > 20);

        do{
            printf("Digite a nota da prova da terceira etapa (Valor 20 pontos): ");
            scanf("%f", &alunos[i].te1.prova);
            if(alunos[i].te1.prova < 0 || alunos[i].te1.prova > 20 ){
                printf("Nota Invalida\n");
            }
        }while(alunos[i].te1.prova < 0 || alunos[i].te1.prova > 20 );

        alunos[i].te1.notaTotalTerceiraEtaapa = alunos[i].te1.trabalhoTerceiraEtapa + alunos[i].te1.prova;
        printf("Nota total na etapa %.2f pontos", alunos[i].te1.notaTotalTerceiraEtaapa);

        alunos[i].notaTotalSemestre = alunos[i].pe1.notaTotalPrimeiraEtapa + alunos[i].se1.notaTotalSegundaEtapa + alunos[i].te1.notaTotalTerceiraEtaapa;
        getchar();

        printf("\n");
    }

    recebendoDadosDosAlunos(ponteiroAluno);

}

void recebendoDadosDosAlunos(struct aluno *p){

    printf("\n\nCadastro dos Alunos\n\n");

    for(int i = 0; i < MAX; i++){
        printf("Nome do aluno %d: %s ", i + 1, p[i].nomeCompleto);
        printf("\nMatricula do aluno %d: %d", i + 1, p[i].matricula);
        printf("\nCurso do aluno %d: %s", i + 1, p[i].curso);
        printf("\nNota final do aluno %d: %.2f pontos.\n", i + 1, p[i].notaTotalSemestre);

        if(p[i].notaTotalSemestre >= 60){
           printf("Situacao Final: Aprovado");
        }else if(p[i].notaTotalSemestre >= 30){
            printf("Situacao Final: Exame Especial");
        }else{
            printf("Situacao Final: Reprovado");
        }

        printf("\n\n");
    }
}
