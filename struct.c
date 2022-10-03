/*
SELECTOR DE OPERACION ARITMETICA CON SENTENCIA IF/ELSE(using chars/string)
en estos casos para hacer un menu se utiliza switch 

TRIANGULO DE PASCAL OPCION 6
*/ 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int num, num2, sum, mul,res;
int selector;
char palabraclave[10001000];
char urlcompleta[10001000];
float numfloat1, numfloat2, numfloatres;

int suma(int num, int num2, int aux){	// funcion suma
	return res = num + num2;  
};

int multi(int num,int num2,int aux){	// funcion multiplicar
	return res = num * num2; 
};

int resta(int num,int num2, int aux){ // funcion resta
	return res = num - num2;
};

float division(float numfloat,float numfloat2, float auxfloat){ //funcion multiplicar
	return numfloatres = numfloat1 / numfloat2;
}

void pedirdosnumeros(){
	printf("ingrese el primer valor\n");
	scanf("%d", &num);
	printf("ingrese el segundo valor\n");
	scanf("%d", &num2);
};
void asciiart(){
/*
		(()__(()
		/       \ 
		( /    \  \
		\ o o    /
		(_()_)__/ \             
		/ _,==.____ \
		(   |--|      )
		/\_.|__|'-.__/\_
		/ (        /     \ 
		\  \      (      /
		)  '._____)    /    
		(((____.--(((____/
*/
	printf("\n\t ");
	printf("\n\t Menu");
    printf("\n\t 1. Suma");
    printf("\n\t 2. Multiplicacion");
    printf("\n\t 3. Resta");
	printf("\n\t 4. Division");
	printf("\n\t 5. Buscador");
	printf("\n\t 9. Debug/Test");
    printf("\n\n\t Ingrese operacion:D ");
	
};

int menu(){
	asciiart();
	scanf("%d", &selector);
};

int main (){
	menu();
	switch(selector){
		case 1: 
		pedirdosnumeros();
		suma(num,num2,res);
		printf("la suma es %d\n", res);
		break;
		
		case 2:
		pedirdosnumeros();
		multi(num,num2,res);
		printf("la multiplicacion es %d", res);
		break;
		
		case 3: 
		pedirdosnumeros();
		resta(num,num2,res);
		printf("La resta es %d", res);
		break;
		
		case 4:
		printf("ingrese el primer valor\n");
		scanf("%f", &numfloat1);
		printf("ingrese el segundo valor\n");
		scanf("%f", &numfloat2);
		division(numfloat1,numfloat2,numfloatres);
		printf("La division es %f ", numfloatres);
		break;
		
		case 5:
		printf("Ingresar Palabras clave para su busqueda\n");
		scanf("%s", palabraclave);
		printf("%s", palabraclave);
		strcat(strcpy(urlcompleta, "START https://www.google.com/search?q=+"), &palabraclave);
		system(urlcompleta);
		break;
		
		case 9:
		pedirdosnumeros();
		multi(num,num2,res);
		if (res % 2 == 0){
		printf("\nEl numero es par\n");
		} else {
		printf("\nEl numero es impar\n");
		}
		for (int i = 1; i<=100;i=i+1){
		printf("%d ", i);
		}
		printf("\n");
		while(res>=0){
		printf("%d ",res);
		res = res - 1;
		} 
		break;

		default:
		printf("Seleccione alguna operacion valida");
		break;
	}
	return 0;
};



