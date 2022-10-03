#include <stdio.h>

int main(){
	int x = 0;
	
	printf("ingrese un numero ");
	scanf("%d", &x);
	
	switch(x){
		case 10: 
		printf("El numero es igual a 10");
		break;
		case 20:
		printf("El numero es igual a 20");
		break;
		case 50:
		printf("El numero es igual a 50");
		break;
		case 100:
		printf("El numero es igual a 100");
		break;
		default:
		printf("El numero no esta la sentencia switch");
	}
	return 0;
}