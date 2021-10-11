#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float Salario, inss, ir, sal_liguido;
	
	printf("De o valor do Salario Bruto: \n");
	scanf("%f", &Salario);
	
	if(Salario <= 1693.72)
	{
		inss = Salario * 0.08;
	}
	else
	if(Salario >= 1693.73 && Salario <= 2822.90)
	{
		inss = Salario * 0.09;
	}
	
	printf("De o valor do Salario para calcular ir: \n");
	scanf("%f", &Salario);
	
	if(Salario >= 1903.99 && Salario <= 2826.85)
	{
		ir = Salario * 0.08;
	}
	sal_liguido = (Salario - inss) - ir;
	
	printf("\n Desconto inss: %2.f\n", inss);
	
	printf("\n Desconto ir: %2.f\n", ir);
	
	printf("\n sal_liguido: %2.f\n", sal_liguido);
	
	return 0;
}
