#include<stdio.h>
#include<conio.h>
void main()
{
	int temp,a[100],i,n,j;
	printf("enter no. of elements");
	scanf("%d",&n);
	printf("enter elements");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("sorted array is\n");
	for(i=1;i<=n;i++)
	printf("%d\n",a[i]);
	
}
