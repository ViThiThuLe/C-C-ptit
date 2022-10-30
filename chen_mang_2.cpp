#include<stdio.h>
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void in(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void chenmang(int a[],int n,int b[],int m,int k)
{
	int i,j;
	for(i=m+n-1;i>=k;i--)
	{
		a[i]=a[i-m];
	}
	for(i=k;i<k+m;i++)
	{
		a[i]=b[i-k];
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	int t1=1;
	while(t1<=t)
	{
		int n,m,k;
		scanf("%d%d%d",&n,&m,&k);
		int a[100],b[100];
		nhap(a,n);
		nhap(b,m);
		printf("Test %d:\n",t1);
		chenmang(a,n,b,m,k);
		in(a,m+n);
		printf("\n");
		t1++;
	}
}
