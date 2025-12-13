#include<stdio.h>
int main()
{
	int i, j, n;
	printf("enter size of array:");
	scanf("%d", &n);
	int arr[n];
	printf("enter any %d elements in array:", n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("duplicate elements are:");
	for(i=0; i<n; i++)
	{
		int rep=0;
		int cnt=0;
		for(j=0;j<n;j++)
		{
			if(j<1 && arr[i]==arr[j])
			{
				rep=1;
				break;
			}
			if(arr[i]==arr[j])
			{
				cnt++;
			}
		}
		if(!rep && cnt>1)
		{
			printf("%d",arr[i]);
		}
	}
}
