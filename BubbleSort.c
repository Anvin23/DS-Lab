#include<stdio.h>
int main()
{
	int arr[50],n,i,j,temp;
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	printf("Enter %d elements \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
	  {
	  if(arr[j]>arr[j+1])
	    {
		    temp=arr[j];
		    arr[j]=arr[j+1];
		    arr[j+1]=temp;
	    }
	  }
	}
	printf("\nThe Sorted Array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}