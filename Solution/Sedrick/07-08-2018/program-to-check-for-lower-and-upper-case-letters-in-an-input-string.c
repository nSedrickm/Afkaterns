#include<stdio.h>
#include<string.h>
int main()
    {
     char string[20];
     int size = 0;
     int lower_case=0;
     int upper_case=0;
     printf("Enter array size :");
     scanf("%d",&size);
     printf("Enter word :");
     scanf("%s",string);
     printf("word:%s",string);
     letters();

    }
    int letters(char array[20],int size)
    {
      int i;
      for (i=0 ; i<array[size];i++)
      {
       if( array[i] >= 'a' && array[i] <= 'z' )
       {
        printf("lower-case letters found");
       }
       else(array[i] >= 'A' && array[i] <= 'z');
       {
        printf("Upper-case letters found");
       }

      }
     }



