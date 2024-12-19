#include <stdio.h>

int main(void)
{
    unsigned short N;
    scanf("%hu", &N);

    // здесь продолжайте программу
    int res = (int)round(N * 2.54);
    printf("%d", res);


    return 0;
}
