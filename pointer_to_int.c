#include <stdio.h>
int main(){
	int num = 10;
	int *ptr = &num;

	printf("The value of num is %d", *ptr);
	return 0;
}
