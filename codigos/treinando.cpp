#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float Area;
	float Raio;
	float pi;
	pi = 3.14;
	
	printf("De o valor de Raio \n");
	scanf("%f", &Raio);
	
	Area = pi *(Raio * Raio);
	
	printf("Area da circunferencia e: %f", Area);
	return 0;
}
