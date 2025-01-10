#include <stdio.h>

int main(void)
{
    int i = 100;


   //for (int i = 100; i <= 999; i++)
   //{
       //if (i % 47 == 6 || i % 53 == 45)
       //{
           //printf("%d ", i);
       //}
   //}

   while (i <= 999)
   {
       if (i % 47 == 6 || i % 53 == 45)
       {
           printf("%d ", i);
       }
       i++;
   }

   return 0;
}
