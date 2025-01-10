#include <stdio.h>

int main(void)
{
   int n;
   scanf("%d", &n);

   double S = 0.0;

   int i = 1;
   while (i <= n)
   {
       S += 1.0 / (i * i);
       i++;
   }

   printf("%.3f\n", S);
   return 0;

}
