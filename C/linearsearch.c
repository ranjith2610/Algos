#include<stdio.h>
 
int main()
{
	int a[10],i,x,n;
	printf("no of elements");
	scanf("%d",&n);
	
	printf("Enter array elements:n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter element to search:");
	scanf("%d",&x);
	
	for(i=0;i<n;i++)
		if(a[i]==x)
			break;
	
	if(i<n)
		printf("Element found at position %d",i);
	else
		printf("not there");
 
	return 0;
}