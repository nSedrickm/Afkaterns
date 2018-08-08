/*program to determine if a number is a palidrome*/
#include<stdio.h>
 int main()
 {
   int number= 0;
   int counter = 0;
   int remainder=0;
   int reversed_number=0;

   printf("Enter an integer:");
   scanf("%d", & number);
   printf("Number is :%d \n",number);
   counter=number;
   while(counter != 0)
   {
     remainder = counter % 10;
     reversed_number = reversed_number*10 + remainder;
     counter = counter/10;

   }
    printf("Reversed number is :%d \n", reversed_number);

   if (number == reversed_number)
   {
     printf("Number %d is a palindrome", number);
   }
   else
   {
     printf("Number %d is not a palindrome",number);
   }


   return 0;
 }
