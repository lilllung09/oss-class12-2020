#include <stdio.h>

int add(int x, int y) {
    return (x+y);
}

int main()
{
    printf("Hello1, World\n");

    int a=3, b=2;
    int c = add(a,b);
    printf("a+b=%d\n", c);

    return 0;
}
