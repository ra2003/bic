#include <stdio.h>

int foobar(int a)
{
    printf("%d\n", a);
}

int main()
{
    int a = 10;
    foobar(a);

    return 0;
}
