#include<stdio.h>
#include<math.h>

int thuannghich(int n)
{
	int a=n,m=0;
	while(a>0)
	{
		m= m*10 + a%10;
		a/=10;
	}
	if(m==n) return 1;
	return 0;
}

int so4(int n)
{
	int m;
	while(n>0)
	{
		m=n%10;
		n/=10;
		if(m==4) return 0;
	}
	return 1;
}

int tong(int n)
{
	int m,s=0;
	while(n>0)
	{
		m=n%10;
		s+=m;
		n/=10;
	}
	if(s%10==0) return 1;
	return 0;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		int a=pow(10,n-1),b=pow(10,n);
		for(i=a;i<b;i++)
		{
			if(thuannghich(i) && so4(i) && tong(i)) printf("%d ",i);
		}
		printf("\n");
	}
}
