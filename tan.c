#include <stdio.h>

#define MAX_WIDTH 256
#define MAX_HEIGHT 500

int main(void)
{
    double width, height;

    scanf("%lf %lf", &width, &height);

    double res_1 = (width > MAX_WIDTH) ? MAX_WIDTH : width;
    double res_2 = (height > MAX_HEIGHT) ? MAX_HEIGHT : height;

    printf("%.1f %.1f", res_1, res_2);

    return 0;
}
