/*#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d", &n);
	if(n%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}*/
#include<stdio.h>
int main()
{
	int i,j,min,temp;
	int a[6]={50,60,30,90,70,10};
	for(i=0;i<6;i++)
	{
	    min=i;
		for(j=i+1;j<6;j++)
		{
			if(a[j]<a[min])
			min=j;
			{
				temp=a[i];
				a[i]=a[min];
				a[min]=temp;
			}
		}
	}
	for(i=0;i<6;i++)
	printf("%d",a[i]);
	return 0;
}
