/*program to determine if a number is a palidrome*/
#include<stdio.h>
 int main()
 {
   int number =0;
   int reversed_number =0 ;
   int remainder=0;
   printf("Enter an integer:");
   scanf("%d",&number);
   printf("Number is :%d \n",number);

   while(number!= 0)
   {
     remainder = number % 10;
     reversed_number = reversed_number *10 + remainder;
     number /= 10;

   }
   printf("Reversed number is :%d \n", reversed_number);

   if (number = reversed_number)
   {
     printf("Number is a palidrome");
   }
   else{
     printf("Number is not a palidrome");
   }


   return 0;
 }
