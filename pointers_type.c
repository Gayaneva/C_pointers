#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'c';

    int *ptr = &a;
    float *ptr1 = &b;
    char *ptr2 = &c;

    printf("Address of a: %p\n",ptr);
    printf("Address of b: %p\n", ptr1);
    printf("Address of c: %p\n", ptr2);

    return 0;
}

