#include<stdio.h>
int fact(int base ,int exp){
   while(base >= 1 && base <= exp)
   {
   	return base * fact(base,exp-1);
   
   }
}

int mystery(int a, int b) {
   if (b == 1)
      return a;
   else 
      return a + mystery(a,b-1);
}

int main(){
	int base =0;
   int exp =0;
	printf("Enter base number:");
	scanf("%d",&base);
   printf("Enter power to raise to:");
   scanf("%d",&exp);
	printf(" %d raised to  %d is %d\n", base,exp,fact(base,exp));
   printf("Mystery is %d \n", mystery(base ,exp));

	return 0;
}
