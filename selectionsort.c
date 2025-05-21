#include<stdio.h>
 void selectionsort(int arr[],int n)
 {
 	int i, j;
 	int min;
 	for(i=0;i<n-1;i++)
 	{
 		min=i;
 		for( j=i+1;j<n;j++)
 		{
 			if(arr[j]<arr[min]){
 		        min=j;
 			}
		 }
		 	int temp=arr[i];
 			arr[i]=arr[min];
 			arr[min]=temp;
	 }
 }
int main()
{
	int i,j,n,arr[10];
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("before sorting");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	selectionsort(arr,n);
		printf("\n after sorting");
		for( i=0;i<n;i++)
		{
			printf("%d",arr[i]);
		}
}
