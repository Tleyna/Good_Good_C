#include <stdio.h>

int main(void)
{
    int rect_width = 640, rect_height = 480;
    int w = 1, h = 1;
    scanf("%d; %d", &w, &h);

    // здесь продолжайте программу
    int a = (rect_width / w);

    int b = (rect_height / h);

    int c = a * b;

    int d = (a + (rect_width % w != 0)) * (b + (rect_height % h != 0));
    int res = d - c;

    printf("%d", res);

    return 0;
}
