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
		int t=a[0];
		for(int i=0;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		a[n-1]=t;
	}
	for(int i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
}
