#include<stdio.h>
int main()
{
	int n,i,dem=0,m=0;
	scanf("%d",&n);
	int a[n],b[100];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int kt;
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j]&&i!=j)
			{
				kt=1;
			}
		}
		if(kt==0) dem++;
		kt=0;
	}
	printf("%d\n",dem);
	for(i=0;i<n;i++)
	{	
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j]&&i!=j)
			{
				m=1;
			}
		}
		if(m==0) printf("%d ",a[i]);
		m=0;
	}
}
