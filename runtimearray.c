/*
	create a array in runtime, worth to create a array with user input values

*/

#include <stdio.h>

int main(){
	int array[4];
	int i,j;
	printf("Ingrese 4 valores para el array: ");
	for(i=0;i<4;i++){
		scanf("%d", &array[i]);
	}
	for(j=0;j<4;j++){
		printf("%d ", array[j]);
	}
}