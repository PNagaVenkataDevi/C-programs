#include<stdio.h>
int main()
{
	int n,i;
	printf("enter size of the array ");
	scanf("%d",&n);
	int a[n];
	printf("enter %d integers",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("reverse of the given array is");
	for(i=n-1;i>=0;i--)
	{
	printf("%d",a[i]);
	}
	return 0;
}
