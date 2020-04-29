#include <stdio.h>

void swap(int* x,  int* y) {
	int temp = *x;
	*x = *y;
	*y= temp;
}

int main()
{
    printf("Hello1, World\n");

    return 0;
}
