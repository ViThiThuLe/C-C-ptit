#include<stdio.h>
int main()
{
	int n, k, i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	while(k--)
	{
		int t = a[n-1], i;
		for( i=n-1; i>0; i--)
		{
			a[i] = a[i-1];
		}
		a[0]=t;
	}
	for( i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}
