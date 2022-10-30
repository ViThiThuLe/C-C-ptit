#include<stdio.h>
#include<math.h>
int nto(int n)
{
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
	int t1=1;
	while(t1<=t)
	{
		int n,i,j,dem,k;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for( i=0;i<n;i++)
		{
			for( j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					int k=a[i];
					a[i]=a[j];
					a[j]=k;
				}
			}
		}
		printf("Test %d:\n",t1);
		for(i=0;i<n;i++)
		{
			dem=0; 
			k=1;
			for( j=0;j<i;j++)
			{
				if(a[i]==a[j]) k= 0;
			}
			if (k==1 && nto(a[i])) 
			{
				for( j=0;j<n;j++)
				{
					if(a[i]==a[j]) dem++;
				}
			printf("%d xuat hien %d lan",a[i],dem);
			printf("\n");
			}
		}
		printf("\n");
		t1++;
	}
}
