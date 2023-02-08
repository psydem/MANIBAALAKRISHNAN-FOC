#include<stdio.h>
int main()
{
  int i,n,Sum=0,numbers;
  float Average;

  printf("\nEnter the number of values:\n");
  scanf("%d",&n);

  printf("\n Enter the value for each:\n");
  for(i=0;i<n;++i)
   {
     scanf("%d",&numbers);
     Sum = Sum +numbers;
   }

  Average = Sum/n;

  printf("\nSum of the %d Numbers = %d",n, Sum);
  printf("\nAverage of the %d Numbers = %.2f",n, Average);

  return 0;
}
