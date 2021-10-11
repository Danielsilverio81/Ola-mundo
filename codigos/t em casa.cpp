#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, par, inpar;
	
	printf("\n Digite um valor para calcular",n);
	scanf("%d", &n);
	while (n > 1)
	{
	
	if(n % 2==par)
    {
	
     n = n / 2;
     printf("%d \n", n);
 }
     
     	
		 else
		 {
		 
		 n = 3 *n + 1;
     	printf("%d \n", n);
         }
     }
}
	

