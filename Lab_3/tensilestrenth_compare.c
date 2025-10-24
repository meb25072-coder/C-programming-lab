#include<stdio.h>
int main()
{
	float TS1,TS2;
	printf("enter the tensile strenth of first material in MPa");
	scanf("%d",&TS1);
	printf("enter the tensile strenth of second material in MPa");
	scanf("%d",&TS2);
	
	if(TS1>TS2){
		printf("the first material has larger tensile strenth ");
	}
	else if(TS1<TS2){
		printf("the second material has larger tensile strenth ");
	}
	else{
		printf("both the materials have same tensile strenth");
	}
	return 0;
}
