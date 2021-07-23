// In binary search the elements should be in increasing order for searchng
#include<stdio.h>
void main()
{
	int i,n,a[20],s,mid,low=0,high=n,found=0;
	printf("enter number of elements to search\n");
	scanf("%d",&n);
	printf("enter elements in increasing order\n");
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	printf("enter element to search");
	scanf("%d",&s);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(s<a[mid])
		high=mid-1;
	else if(s>a[mid])
		low=mid+1;
		else if(s==a[mid])
		{
			printf("element found at %d location",mid);
			found=1;
			break;
		}
		
		}
		if(!found)
		printf("element not found");
}
