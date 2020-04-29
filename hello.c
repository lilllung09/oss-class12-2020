#include <stdio.h>

int add(int x, int y) {
    return (x+y);
}

void swap(int* x,  int* y) {
	int temp = *x;
	*x = *y;
	*y= temp;
}

int main()
{
    printf("Hello3, World\n");

    int a=3, b=2;
    int c = add(a,b);
    printf("a+b=%d\n", c);

    return 0;
}
