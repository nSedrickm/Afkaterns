// this program prints all even numbers between 1000 and 3000//
#include <stdio.h> 
#include <stdlib.h>


int main()
{
	/*for (int i = 1000; i <= 3000; ++i)
	{
		if (i%2 == 0)
		{
			printf("%d\t", i);
		}
		else return 0;
	*/

	int i = 1000;

	while ( i <= 3000 ) {
		if (i%2 == 0) 
		{
			printf("%d\t", i);
		}
		i++;
	}

	return 0;
	

}