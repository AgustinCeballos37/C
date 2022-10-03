#include <stdio.h>

int main(){
	int a,b,c;
	printf("Ingrese 3 numeros para ver cual es el mas grande ");
	scanf("%d %d %d", &a,&b,&c);
	if(a > b && a > c){
		printf("%d es el mas grande", a);
	}
	if(b>a && b>c){
		printf("%d es el mas grande", b);
	}
	if(c>a && c>b){
		printf("%d es el mas grande", c);
	}
	if(a == b && a == c){
		printf("Los tres valores son iguales");
	}
	
	return 0;
}