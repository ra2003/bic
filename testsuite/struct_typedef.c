int printf(char *s, ...);

typedef struct {
    int a;
    int b;
} bana;

int main()
{
    bana baz;
    baz.a = 10;
    baz.b = 1249;
    printf("%d\n", baz.a);
    printf("%d\n", baz.b);
}