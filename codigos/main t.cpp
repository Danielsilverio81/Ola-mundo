#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float Nota1;
	float Nota2;
	float Media;
	
	printf("Insira Nota1: \n");
	scanf("%f", &Nota1);
	
	printf("Insira Nota2: \n");
	scanf("%f", &Nota2);
	
	Media = (Nota1 + Nota2) /2;
	
	printf("Media = %f", Media);



	return 0;
}
