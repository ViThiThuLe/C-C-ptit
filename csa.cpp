#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,i;
		scanf("%d %d",&a,&b);
		int s[100];
		s[0]=1;
		s[1]=1;
		for( i=2;i<93;i++)
		{
			s[i]=s[i-1]+s[i-2];
		}
	
		for( i=a;i<=b;i++)
		{
			 printf("%d ",s[i]);
		}
	}
	
}
