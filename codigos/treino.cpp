#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int a=3, i, vetor[3];
    
    for(i=0; i<4; i++){
    printf("\n Digite um valor %d \t",i);
    scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<4; i++){
    printf("\n O valor %d e iqual a %d: \t",i , vetor[i]);
   }
	return 0;
}
