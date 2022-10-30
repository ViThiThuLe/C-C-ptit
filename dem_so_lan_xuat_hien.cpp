#include<stdio.h>
int main()
{
	int n,i,j,dem,ktra;
	scanf("%d",&n);
	int a[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for( i=0;i<n;i++)
	{
		dem=0; 
		ktra=1;
		for( j=0;j<i;j++)
		{
			if(a[i]==a[j]) ktra= 0;
		}
		if (ktra==1) {
			for( j=0;j<n;j++)
		{
			if(a[i]==a[j]) dem++;
		}
		printf("%d %d",a[i],dem);
		printf("\n");
		}
	}
}

