#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	while(k--)
	{
		int t=a[n-1];
		for(int i=n-1;i>0;i--)
		{
			a[i]=a[i-1];
		}
		a[0]=t;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
