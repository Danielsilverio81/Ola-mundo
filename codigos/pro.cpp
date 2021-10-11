#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {	
int nota1, nota2, Resultado;
	
	printf("\n Digite o valor de Nota 1: \n",nota1);
	scanf("%d",&nota1);
	
	printf("\n Digite o valor de Nota 2: \n",nota2);
	scanf("%d", &nota2);
	
	Resultado = (nota1 + nota2)/2;
	
	if(Resultado > 20){
		printf("Aluno passou na prova");
	}
	else 
	{
		printf("Aluno repetira a prova");
}

	
	return 0;
}
