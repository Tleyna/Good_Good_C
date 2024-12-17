#include <stdio.h>

int main(void)
{
    int a, b, c, res;
    scanf("%d %d %d", &a, &b, &c);

    res = ((a + b > c) ? ((b + c > a) ? ((c + a > b) ? 1 : 0) : 0) : 0);
    printf(res ? "yes" : "no");

    return 0;
}

