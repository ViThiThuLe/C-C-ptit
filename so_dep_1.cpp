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


int f(int n)
{
	if(n==0||n==1) return 1;
    else 
 		return f(n-1)+f(n-2);
}
int ktra(int n)
{
	for(int i=0;i<=n;i++)
	{
		if(f(i)==n)
		{
			return 1;
		}
		
	}
	return 0;
}
int ktra1(int n)
{
	int m,s=0;
	while(n>0)
	{
		m=n%10;
		s+=m;
		n/=10;
	}
	if(ktra(s)) return 1;
	return 0;
}



int main()
{
	int a,b,i;
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		for(i=a;i<=b;i++)
		{
			if(nto(i) && ktra1(i))
				printf("%d ",i);
		}
	}
	if(a>b)
	{
		for(i=b;i<=a;i++)
		{
			if( nto(i) && ktra1(i))
				printf("%d ",i);
		}
	}
}
