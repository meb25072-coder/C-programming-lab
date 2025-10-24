#include<stdio.h>
int main()
{
	float a,b,sum,sub,div,multi;
	int op;
	printf("enter the first number:");
	scanf("%f",&a);
	printf("choose the operator\n(add)=1\n(sub)=2\n(div)=3\n(multi)=4\nenter the operator number:\n");
	scanf("%d",&op);
	printf("enter the second number:");
	scanf("%f",&b);
	sum=a+b;
	sub=a-b;
	div=a/b;
	multi=a*b;
	
	switch (op)
	{
		case 1:
			printf("the result is : %f",sum);
			break;
	    case 2:
	    	printf("the result is :%f",sub);
	    	break;
	    case 3:
		    printf("the result is :%f",div);
			break;
		case 4:
		    printf("the result is :%f",multi);
			break;
		default	:
		   printf("invalid Input");
		   break;		
				
	}
	return 0;
}
