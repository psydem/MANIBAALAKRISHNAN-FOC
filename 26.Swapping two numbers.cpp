#include<stdio.h>
#include<conio.h>
int main() 
{
   int x, y, temp;
   printf("Enter the value of x and y :\n");
   scanf("%d %d", &x, &y);
   printf("Before swapping x=%d, y=%d ", x, y);
   temp = x;
   x = y;
   y = temp;
   printf("After swapping x=%d, y=%d", x, y);
   return 0; 
}
