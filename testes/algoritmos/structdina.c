#include <stdio.h>
#include <stdlib.h>

struct Curso{
    char materia[50];
    int horario;
    char professor[50];
};
//declarando uma struct
struct Aluno {
    //atributos da struct Paciente "Campos"
    char nome[50];
    int idade;
    char endereco[50];
    char telefone[15];
    struct Curso curso;
};
int main(){
    

    struct Aluno aluno = {"Guilherme",20,"por ai","21342-1234","ads",200,"Carlos"};
    printf("Aluno: %s\n",aluno.nome);
    printf("Aluno: %d\n",aluno.idade);
    printf("Aluno: %s\n",aluno.endereco);
    printf("Aluno: %s\n",aluno.telefone);
    printf("testes: %d\n",aluno.curso.horario);
    printf("testes: %s\n",aluno.curso.professor);
    printf("teste: %s\n",aluno.curso.materia);
return 0;
}


















    //criando 3 variaveis de pacientes
    // struct Paciente pacientes[3];
    // int i;
    // // atribuindo valores aos campos da primeira variavel
    // strcpy(pacientes[0].nome,"Gui");
    // pacientes[0].idade = 20;
    // strcpy(pacientes[0].endereco,"Rua 123");
    // strcpy(pacientes[0].telefone,"123456789");

    // // atribuindo valores aos campos da segunda variavel
    // strcpy(pacientes[1].nome,"Joao");
    // pacientes[1].idade = 25;
    // strcpy(pacientes[1].endereco,"Avenida 456");
    // strcpy(pacientes[1].telefone,"987654321");

    // // atribuindo valores aos campos da terceira variavel
    // strcpy(pacientes[2].nome,"Maria");
    // pacientes[2].idade = 30;
    // strcpy(pacientes[2].endereco,"Rua 789");
    // strcpy(pacientes[2].telefone,"555555555");

    // // Imprimindo valores da estrutura

    // for(i = 0; i<3; i++){
    //     printf("Nome: %s\nIdade: %d\nEndereco: %s\nTelefone: %s\n", pacientes[i].nome, pacientes[i].idade, pacientes[i].endereco, pacientes[i].telefone);
    //     printf("\n");
    // };


