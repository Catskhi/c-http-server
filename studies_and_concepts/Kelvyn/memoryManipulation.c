#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *nome;
    int num_notas[3];
    float *notas; 
} student;


student criar_aluno(char *nome, int num_nota[3], float notas) {
    student novo;
    snprintf(novo.nome, 50, "%s", nome);
    novo.num_notas = num_nota;
    novo.notas = notas;
    return novo;
}


int main(){
#define maxBufferSize 1024

char buffer[maxBufferSize];
char *alocated_name = NULL;
int chose;

printf("1. Adicionar aluno\n"
           "2. Adicionar nota a um aluno\n"
           "3. Exibir todos os alunos\n"
           "4. Exibir aluno com maior média\n"
           "5. Sair\n"
           "Digite o numero de uma opção: ");


switch (chose) {
    case 1:
        
}

}