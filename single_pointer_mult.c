#include <stdio.h>
int main(){
	int a = 0;
	int b = 0;

	int *p = NULL;

	p = &a;
	*p = 1;

	p = &b;
	*p = 2;

	p = &a;
	*p += 5;

	p = &b;
	*p +=5;

	printf("%d %d", a,b);

}
