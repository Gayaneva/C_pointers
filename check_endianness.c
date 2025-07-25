#include <stdio.h>

int main() {
	int x = 1;      
	char *c = (char*)&x;      

	if (*c == 1)
        	printf("System is Little Endian");
        else
       		 printf("System is Big Endian");

        return 0;
}

