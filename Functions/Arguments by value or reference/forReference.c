/*
	Diferencias entre pasar argumentos por valor y por referencia
	
	la diferencia mayor es que pasar argumentos por valor hace una copia de la variable en una direccion de memoria distinta.
	en cambio, pasar argumentos por referencia, trabajas con la direccion de memoria entonces todos los cambios realizados en la variable van a permanecer hasta fuera de la funcion.
	
	
	en este codigo se ejemplifica un poco cambiando de lugar 2 numeros
*/

#include <stdio.h>

void swap(int *a, int*b);

int main(){
	int a = 10;
	int b = 20;
	printf("Valor de a %d y b %d\n",a,b);
	swap(&a,&b);
	printf("Valor de a %d y b %d fuera de la funcion\n", a,b);
	return 0;
	
	
}

void swap(int *a, int *b){
	
	int temp;//usamos una funcion temporal para almacenar una copia del valor
	temp = *a;
	*a = *b;
	*b = temp;
	
	printf("Valor de a %d y b %d dentro de la funcion\n", *a,*b);
}

//Podemos observar que el valor ahora es el mismo tanto dentro de la funcion como fuera
//Esto se debe a que pasar argumentos por referencia(&), trabajamos con la direccion en memoria original
//Y no con una copia.



/*
No.	Call by value														Call by reference
1	A copy of the value is passed into the function.						
																	 	An address of value is   passed into the function
2	Changes made inside the function is limited to the function only.   
																		The values of the actual parameters do not change by changing the formal parameters.
3	Actual and formal arguments are created at the different memory 
    location.	
																		Actual and formal arguments are created at the same memory location




*/