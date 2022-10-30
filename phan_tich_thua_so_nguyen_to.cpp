#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=",n);
	int m,a[100],i,j,dem=0;
	for( i=2;i<=n;i++)
	{
		while(n>1)
		{
			if(n%i==0)
			{
				a[m]=i;
				dem++;
				n/=i;
			}
			else i++;
		}
	}
	for(i=0;i<dem;i++)
	{
		int dem1=1,k=1;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j]) k=0;
		}
		if(k==1)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j]) dem1++;
			}
			printf("%d^%d",a[i],dem1);
			if(a[i]!=a[j]) printf(" * ");
		}
		
	}
}
