#include<stdio.h>
int main()
{
	int i,j,k;
	printf("enter the total user:\n");
	scanf("%d",&i);
	printf("enter the staff user:\n");
	scanf("%d",&j);
	k=i-(j+j/3);
	printf ("total student users are %d",k);
}
