#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("enter the num : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count>2)
	{
		printf("%d is a composite number");
	}
	else
	{
		printf("%d is not a composite number");
	}
}
