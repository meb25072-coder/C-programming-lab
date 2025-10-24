#include<stdio.h>
int main()
{
	int a;
	printf("enter the temperature in degree celcius");
	scanf("%d",&a);
	//checking if the number is in the range or not
	if(a>60 && a<=80)
	{
		printf("safe range");
	}
	else
	{
		printf("warning");
	}
	return 0;
}
