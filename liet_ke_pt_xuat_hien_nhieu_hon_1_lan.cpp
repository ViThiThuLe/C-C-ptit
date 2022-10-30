#include<stdio.h>
int main()
{
	int n,i,j,dem,dem1=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int dem=0,k=1;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j]) k=0;
		}
		if(k==1)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j]) dem++;
			}
		}
		if(dem>=1) dem1++;
	}
	printf("%d\n",dem1);
	for(i=0;i<n;i++)
	{
		int dem=0,k=1;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j]) k=0;
		}
		if(k==1)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j]) dem++;
			}
		}
		if(dem>=1) 
		{
			printf("%d ",a[i]);
		}
	}
}
