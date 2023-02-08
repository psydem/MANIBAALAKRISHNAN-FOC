#include<stdio.h>
int main()
{
	//declare local variables
	char opt;
	int n1,n2;
	float res;
	printf("choose an operator(+,-,*,/)to perform the operation in C calculator:\n");
	scanf("%c",&opt); //take an operator
	if (opt=='/')
	{
		printf("You have selected:Division");
	}
	else if (opt=='*')
	{
		printf("You have selected:Multiplication");
	}
	else if (opt=='-')
	{
		printf("You have selected:Subtraction");
	}
	else if (opt=='+')
	{
		printf("You have selected:Addition");
	}
	printf("\nEnter the first number:\n");
	scanf("%d",&n1); //take first number
	printf("\nEnter the second number:\n");
	scanf("%d",&n2); //take second number
	
	switch(opt)
	{
	case'+':
		res=n1+n2; //add of two numbers
		printf("Addition of %d and %d is: %2f",n1,n2,res);
		break;
		
	case'-':
		res=n1-n2; //subtract of two numbers
		printf("Subtraction of %d and %d is: %2f",n1,n2,res);
		break;
	case'*':
		res=n1*n2; //multiply of two numbers
		printf("Multiplication of %d and %d is: %2f",n1,n2,res);
		break;
	case'/':
		if (n2=0) //if n2=0 take another number
		{
			printf("Divisor cannot be equal to zero.Please enter another value");
			scanf("%d",n2);
		}
		res=n1/n2; //division of two numbers
		printf("Division of %d and %d is: %2f",n1,n2,res);
		break;
	default: /*use default to print default message if any condition is not satisfied*/
	printf("Something is wrong!!Please check the options");
}
return 0;
}
