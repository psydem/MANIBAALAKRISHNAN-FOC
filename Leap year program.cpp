#include<stdio.h>
int main()
{
	int year;
	printf("enter the year :\n");
	scanf("%d",&year);
	if (year%400==0)
	printf("the given year is leap year");
	else if (year%100==0)
	printf("the given year is not leap year");
	else  if (year%4==0)
	printf("the given year is leap year");
	else
	printf("given year is not a leap year");
}
