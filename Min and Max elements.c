#include<stdio.h>
int main()
{
	int i,max,min,size;
	printf("enter size of the array");
	scanf("%d",&size);
	int arr[size];
	printf("enter elements in a array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	{
	for(i=0;i<size;i++)
	if(arr[i]>max)
	{
		max=arr[i];
	}
	if (arr[i]<min)
	{
		min=arr[i];
	}
    }
    printf("maximum element=%d\n",max);
    printf("minimum element=%d\n",min);
    return 0;
}
