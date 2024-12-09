#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    float x;
    scanf("%f", &x);

    bool res = (int)x  % 5  == 0;

    printf("%d\n", res);

    return 0;

}
