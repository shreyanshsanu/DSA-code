#include<stdio.h>
 void bubblesort(int arr[],int n)
 {
 	int i, j;
 	for(i=0;i<n-1;i++)
 	{
 		for( j=0;j<n-1-i;j++)
 		{
 			if(arr[j]>arr[j+1]){
 			int temp=arr[j];
 			arr[j]=arr[j+1];
 			arr[j+1]=temp;
 				 }
		 }
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
	bubblesort(arr,n);
		printf("\n after sorting");
		for( i=0;i<n;i++)
		{
			printf("%d",arr[i]);
		}
}
