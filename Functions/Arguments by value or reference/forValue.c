/*
	Diferencias entre pasar argumentos por valor y por referencia
	
	la diferencia mayor es que pasar argumentos por valor hace una copia de la variable en una direccion de memoria distinta.
	en cambio, pasar argumentos por referencia, trabajas con la direccion de memoria entonces todos los cambios realizados en la variable van a permanecer hasta fuera de la funcion.
	
	
	en este codigo se ejemplifica un poco cambiando de lugar 2 numeros
*/


#include <stdio.h>

void swap(int x, int y);

int main(){
	int a = 10;
	int b = 20;
	printf("Valor de a %d y b %d\n",a,b);
	swap(a,b);
	printf("Valor de a %d y b %d fuera de la funcion\n", a,b);
	return 0;
}

void swap(int x, int y){
	
	int temp;//usamos una funcion temporal para almacenar una copia del valor
	temp = x;
	x = y;
	y = temp;
	
	printf("Valor de a %d y b %d dentro de la funcion\n", x,y);
}

// Como podemos ver el valor cambiado permanece solamente dentro de la funcion


