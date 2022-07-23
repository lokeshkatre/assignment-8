#include <stdio.h>
int main()
{
   for (int i = 1; i <= 3; i++)
   {
      for (int j = 1; j <= 19; j++)
      {
         if (((j > 3 - i) && (j < 7 + i)) || ((j > 13 - i) && (j < 17 + i)))
            printf("*");
         else
            printf(" ");
      }
      printf("\n");
   }
   printf("****** MySirG ******\n");
   for (int i = 1; i <= 9; i++)
   {
      for (int j = 1; j <= 19; j++)
      {
         if ((j >= 1 + i) && (j < 20 - i)) 
         printf("*");
         else
            printf(" ");
      }
      printf("\n");
   }

   return 0;
}