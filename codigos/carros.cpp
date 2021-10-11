#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	
	printf("Digite o numero do carro de sua escolha: \n");
	printf("(1)...Carro de cor vermelha 2.0 honda \n");
	printf("(2)...Carro de cor preta 3.0 Azira \n");
	printf("(3)...Carro popular mais barato Palio flex \n");
	printf("(4)...Carro na fachetaria de preço alta importado \n");
	scanf("%d",&a);
	
	while (1 > 4 || 4 < 1);
	switch(a){
		case 1:
		printf("Você escolheu o carro da honda vermelho \n");
		break;
		case 2:
		printf("Você escolheu o carro Azira \n");
		break;
		case 3:
		printf("Você escolheu o carro popular \n");
		break;
		case 4:
		printf("você escolheu o carro importado \n");
		break;
		default:
		printf("Valor invalido \n");
	}
	
	
}
