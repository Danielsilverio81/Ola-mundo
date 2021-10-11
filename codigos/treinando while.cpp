#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	
	do{
		printf("\n Digite o numero do sorvete: \n");
		printf("\t (1)...Flocos \n");
	    printf("\t (2)...Chocolate \n");
	    printf("\t (3)...Ovomaltine \n");
	    
	    scanf("%d", & i);
	
	}while ((i<1) || (i>3));
	switch(i){
	case 1:
	printf("\t\t Você escolheu Flocos");
	break;
	
    case 2:
	printf("\t\t Voce escolheu Chocolate");
	break;
	
	case 3:
	printf("\t\t Voce escolheu Ovomaltine");
	break;
   }

	return 0;
	}
