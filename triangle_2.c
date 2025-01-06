#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;
    scanf("%d, %d", &a, &b);

    // здесь продолжайте программу
    double tan = (double)a / (double)b;
    double pi = 3.1415;
    double rad = atan(tan);

    printf("%.2f %.2f", tan, rad);

    return 0;
}
