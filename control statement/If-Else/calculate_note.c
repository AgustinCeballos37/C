#include <stdio.h>
//
int main(){
	
	int clasificacion;
	printf("Ingrese la nota\n");
	scanf("%d", &clasificacion);
	if(clasificacion > 80 && clasificacion <= 100){
		printf("Sacaste una A");
	}
	else if(clasificacion > 60 && clasificacion <= 80){
		printf("Sacaste una B+");
	}
	else if(clasificacion > 40 && clasificacion <= 60){
		printf("Sacaste una B");
	}
	else if(clasificacion > 30 && clasificacion <= 40){
		printf("Sacaste una C");
	}
	else{
		printf("Reprobaste. ");
	}
	
	
	
	return 0;
}