#include <stdio.h>

int main(void)
{
    int a, b, h;
    scanf("%d,%d,%d",&a, &b, &h);

    // здесь продолжайте программу
    float res = (((float)a + (float)b) * (float)h) / 2;
    printf("%.1f\n", res);

    return 0;
}
