#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);

    // здесь продолжайте программу
    unsigned char mask = (1 << 0) | (1 << 3);

    unsigned char res = bits ^ mask;

    printf("%d", res);


    return 0;
}
