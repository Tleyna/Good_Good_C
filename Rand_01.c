#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned short N;
    scanf("%hu", &N);

    // здесь продолжайте программу

    int res_1 = N * 7;
    int res_2 = (int)ceil((double)res_1 / 100);

    printf("%d", res_2);

    return 0;
}
