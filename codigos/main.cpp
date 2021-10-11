#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char Nome [30];
	char endereco [30];
	int idade;
	
	printf("Nome \n");
	scanf("%s", &Nome);
	
	printf("Endereco \n");
	scanf("%s", &endereco);
	
	printf("idade \n");
	scanf("%d",&idade);
	
	printf("\n Nome: %s", Nome);
	printf("\n Endereco: %s",endereco);
	printf("\n Idade: %d",idade);
	
	
	return 0;
}
