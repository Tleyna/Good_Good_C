#include <stdio.h>
#include <math.h>

// здесь объявляйте макро-функцию
#define GIPOT(a,b) (sqrt(pow(a,2)+pow(b,2)))

int main(void)
{
    int a, b;
    if(scanf("%d, %d", &a, &b) != 2) {
        printf("Input error");
        return 0;
    }

    // здесь продолжайте программу

    double length = GIPOT((a + 3),(b - 2));

    printf("%.2f", length);


    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}
