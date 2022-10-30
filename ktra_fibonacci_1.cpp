#include<stdio.h>
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
int main()
{
	int n;
   	scanf("%d",&n);		
  	if(ktra(n)==0) printf("0");
    else printf("1");
}
