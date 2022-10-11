#include <stdio.h>


void fpointer(int **p);


int dato=5;
int *datop=&dato;


int main(){
	fpointer(&datop);
	printf("%d\n", *datop);

return 0;
}


void fpointer(int **p){
	**p=7;
}
