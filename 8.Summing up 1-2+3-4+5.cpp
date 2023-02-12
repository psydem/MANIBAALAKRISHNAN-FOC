#include<stdio.h>
#include<conio.h>
int series_sum(int n)
{
    if (n % 2 == 0)
        return (-(n / 2));
    else
        return ((n + 1) / 2);
}
int main()
{
    int n;
    printf("\nEnter the N term:");
    scanf("%d", &n);
    printf("Sum is:%d",series_sum(n));
    return 0;
}
