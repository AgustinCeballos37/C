/*recorriendo una matriz bidimensional*/
#include <stdio.h>
int i,j;
int array[2][3];
int main(){
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Ingrese la dimension del array[%d][%d]:",i,j);
			scanf("%d", &array[i][j]);
		}
	}
	
	printf("Mostrando el array 2d: \n");
	for(i=0; i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ", array[i][j]);
			if(j==2){
				printf("\n");
			}
		}
	}
	return 0;
}
	