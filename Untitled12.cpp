#include <stdio.h>
int main()
{
	int n;
	printf("please enter the value for count : ");
	scanf("%d",&n);
	
	
	if(n<10)
	{
		printf("The number you entered is less than 10\n");
		if((n%2)==1)
		printf("Number is odd\n");
		else
		printf("Number is even\n");
	}
	else
	printf("The number you entered is greater than 10 and it was ignored\n");
	return 0;
}