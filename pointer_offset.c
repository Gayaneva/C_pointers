#include <stdio.h>
int main(){
	int x = 1;
	int y = 2;
	int z = 3;
	int *ptr = &x;

	*(ptr + 1) = 4;
	*(ptr + 2) = 5;
	printf("Y is %d" , y);
	printf("Z is %d", z);
	return 0;
	
}

