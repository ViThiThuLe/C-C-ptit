#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
    	int a ,b,i;
    	scanf("%d %d",&a,&b);
   		long long F[100];
	  		F[1]=1;
    		F[2]=1;
    	for( i=a; i<=b; i++)
   		{
 			F[i] = F[i-1] + F[i-2];
 			printf("%lld ",F[i]);
		}
    	
    	printf("\n");
    }
}
