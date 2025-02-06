#include <stdio.h>
#include <stdlib.h>


struct Disciplina{
    char nome[50];
    int cargaHoraria;
    char professor[50];
};

struct Aluno{
char nome[50];
int idade;
int matricula;
struct Disciplina disc[3];
};

void cadastrarDisciplina(struct Disciplina disc, const char nome, const char professor, int cargahoraria) {
    strcpy(disc.nome, nome);
    strcpy(disc.professor, professor);
    disc.cargaHoraria = cargahoraria;

};
void cadastrarAluno(struct Aluno aluno, const char *nome, int idade, int matricula) {
    strcpy(aluno.nome, nome);
    aluno.idade = idade;
    aluno.matricula = matricula;

    cadastrarDisciplina(aluno.disc[0], "Matematica", "Prof. Joao Silva", 60);
    cadastrarDisciplina(aluno.disc[1], "Historia", "Prof. Julia Costa", 45);
    cadastrarDisciplina(aluno.disc[2], "Quimica", "Prof. Carlos Souza", 50);
};

void exibirAluno(struct Aluno aluno) {
	int i;
	
    printf("Nome do Aluno: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Matricula: %d\n", aluno.matricula);

    printf("Disciplinas:\n");
    for (i = 0; i < 3; i++) {
        printf("  Disciplina %d:\n", i + 1);
        printf("    Nome: %s\n", aluno.disc[i].nome);
        printf("    Professor: %s\n", aluno.disc[i].professor);
        printf("    Carga Horaria: %d horas\n", aluno.disc[i].cargaHoraria);
    }
}

int main() {
    struct Aluno aluno1;
    cadastrarAluno(aluno1, "Alana Lima", 20, 1234);
    exibirAluno(aluno1);
    return 0;
}