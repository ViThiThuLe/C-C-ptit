#include<stdio.h>
int ktra(long long n)
{
	long long a=n;
	long long m=0;
	while(a>0){
		m=m*10+a%10;	
		a/=10;
	}
	if(m==a) return 1;
	return 0;
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
		int n,
	}
}


