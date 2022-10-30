#include<stdio.h>
int f(long long n)
{
	if(n<4) return n;
    else 
 		return f(n-1)+f(n-2);
}
int ktra(long long n)
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
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
   		scanf("%lld",&n);		
  		if(ktra(n)) printf("YES");
    	else printf("NO");
    	printf("\n");
	}
}
