#include <stdio.h>

int main(){
	int x,y;
	int resul;
	int cantidadTablas;
	printf("Seleccione la cantidad de tablas a mostrar \n");
	scanf("%d", &cantidadTablas);
	for(x=1;x<=cantidadTablas;x++){
		for(y=1; y<=10;y++){
			resul = x * y;
			printf("%d\t", resul);
		}
		printf("\n");
	}
	
	
	
}