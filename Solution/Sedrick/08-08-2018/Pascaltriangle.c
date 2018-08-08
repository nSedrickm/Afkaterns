
#include <stdio.h>
long factorial(int number);

void main()
{
   int i;
   int line_num;
   int j;
   int triangle;
   printf("Enter the number of lines:");
   scanf("%d",&line_num);

   for (i = 0; i < line_num; i++)
   {
      for (j = 0; j <= (line_num - i - 2); j++)
      {
     printf(" ");
      }
      for (j = 0 ; j <= i; j++)
      {
      triangle = factorial(i)/(factorial(j)*factorial(i-j));
     printf("%ld",triangle);
      }
      printf("\n");
   }
   return 0;
}

long factorial(int n)
{
   int init;
   long fact = 1;

   for (init= 1; init <= n; init++)
   {
      fact = fact*init;
   }
   return fact;
}

