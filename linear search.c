//Linear Search program

#include <stdio.h>



int main()
{ 
    int n,i,s,a[20],found=0;
    printf("enter number of elements to search\n");
	scanf("%d",&n);
    printf("enter elements");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    printf("enter element to search");
    scanf("%d",&s);
    for(i=1;i<=n;i++)
    {
	if(a[i]==s)
	{
	printf("element is found at %d position",i);
    found=1;
    break;//to avoid duplicates
}
}
if(!found)
    printf("element not found");
    return 0;
}
