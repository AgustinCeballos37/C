#include <stdio.h>
#define SIZE 5
int array[] = {1,2,3,4,5};
int array2d[2][3] = {
	{1,2,3},
	{4,5,6}
};
int main(){
	
	for(int i = 0; i < SIZE; i++){
		printf("%u", array[i]);
	}
}

