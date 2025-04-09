#include <stdio.h>

int divi(int a, int b)
{
    return a / b;
}
int sobra(int c, int d)
{
    return c % d;
}
int main(void)
{

    int n;
    printf("change owed: \n");
    scanf("%d", &n);
    int m = sobra(n, 25);
    int b = sobra(m, 10);
    int c = sobra(b, 5);
    int d = sobra(c, 1);

    while (n < 1)
    {
        printf("change owed: \n");
        scanf("%d", &n);
    }

    if (m == 0)
    {
        printf("%i\nIncluding:\n", divi(n, 25));
        printf("%d of 25 cents\n", divi(n, 25));
    }
    else if (m > 0 && b == 0)
    {
        printf("%i\nIncluding:\n", divi(m, 10) + divi(n, 25));
        printf("%d of 25 cents\n%d of 10 centes\n", divi(n, 25), divi(m, 10));

    }
    else if (b > 0 && c == 0)
    {
        printf("%i\nIncluding:\n", divi(m, 10) + divi(n, 25) + divi(b, 5));
        printf("%d of 25 cents\n%d of 10 centes\n%d of 5 cents\n", divi(n, 25), divi(m, 10), divi(b, 5));
    }
    else
    {
        printf("%i\nIncluding:\n", divi(m, 10) + divi(n, 25) + divi(b, 5) + divi(c, 1));
        printf("%d of 25 cents\n%d of 10 centes\n%d of 5 cents\n%d of 1 cent", divi(n, 25), divi(m, 10), divi(b, 5), divi(c, 1));
    }

    return 0;
}