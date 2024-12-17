#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);

    // здесь продолжайте программу
    unsigned char mask = (1 << 3) | (1 << 5);

    if ((bits & mask) == mask)
    {
       printf("%d", bits);
    }

    else {

        printf("-1");
    }


    return 0;
}
