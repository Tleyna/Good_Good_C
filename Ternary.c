#include <stdio.h>

int main(void)
{
    float type, w, h;
    scanf("%f %f %f", &type, &w, &h);

    type == 1 ? printf("%.1f\n", w * h) : (type == 2 ? printf("%.1f\n", 2 * (w + h)) : printf("-1\n"));

    return 0;
}

