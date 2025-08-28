
	#include <stdio.h>
	// Function to calculate the square of a number
	int square(int num)
	{
	    return num * num;
	}

	int main()
	{
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	int result=square(num);

    printf("Square: %d\n",  result); // First use

    return 0;	}

