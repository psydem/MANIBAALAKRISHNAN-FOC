#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the value: ");
	scanf("%d",&n);
	int sum=0;
	for (int i=1; i<=n; i++)
	{
		sum+=(2*i-1)*(2*i-1);
	}
	printf("The sum of square of first %d odd number is %d",n,sum);
	return 0; 	
}
