#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main (void){
	struct ficha_aluno{
char nome [40];
float nota;
int numero;
};
struct ficha_aluno aluno;

printf("\n..........Cadastro de Aluno.........\n\n\n");
printf("Nome do Aluno......:");
fgets(aluno.nome, 40, stdin);

printf("Digite o Numero do Aluno:");
scanf("%d", &aluno.numero);

printf("informe a Nota do aluno:");
scanf("%f", &aluno.nota);

printf("\n\n............Lendo Dados da struct...........\n\n");

printf("Nome.........%s", aluno.nome);

printf("Numero.......%d\n", aluno.numero);

printf("Nota.........%2.f\n", aluno.nota);

return 0;
}
