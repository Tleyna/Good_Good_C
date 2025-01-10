#include <stdio.h>

int main(void)
{
   int N;
   scanf("%d", &N);

   int x = 0;
   int y = 1;
   int z = 0;
   //int res;

   while (z < N)
   {
       y += x;
       printf ("%d ", y);

       x = y;
       //y = res;
       z++;
   }

   return 0;
}
