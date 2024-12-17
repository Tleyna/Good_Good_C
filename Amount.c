#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    unsigned char flags = x;
    unsigned char mask = y;
    unsigned char res = flags & mask;

    if (res == mask)
    {
        printf("yes");
    }

    else
    {
        printf("no");
    }

    return 0;

}
