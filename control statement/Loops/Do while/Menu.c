#include <stdio.h>
#include <stdlib.h>

void main(){
	char c;
	int opcion,b;
	do{
		printf("\n1.print hello\n2.print koi\n3.exit\n");
		scanf("%d", &opcion);
		switch(opcion){
			case 1:
			printf("Hello\n");
			break;
			case 2:
			printf("koi\n");
			break;
			case 3:
			exit(0);
			break;
			default:
			printf("Seleccione una opcion valida \n");
		}
		printf("Quiere volver a ingresar un valor?\n");
		scanf("%d", &b);
		scanf("%c", &c);
	}while(c=='y');
}