#include<stdio.h>
int main()
{
	int arr[]={16,-18,27,-16,23,-21,19};
	int i,j,n,count=0;
	n=sizeof(arr)/sizeof(arr[0]);
	for(i=0; i<n; i++)
    {
    for(i=0; i<n; i++)
    {
    
        if(arr[i] < 0)
        {
            count++;
        }
    }
    }

    printf("\nTotal negative elements in array = %d", count);

    return 0;
}
