#include <stdio.h>


int fb( int x)
{
    
        int m=0,i=2;
 

        long long a[100];
        a[0]=1;
        a[1]=1;
        while(m<x)
        {	
			a[i]=a[i-1]+a[i-2];
		   	m=a[i];
           	i++;
		}
        
		if(m==x||x==1) return 1;
		else return 0;
       

    
}
int main()
{
	int a, b,i;
	scanf("%d %d",&a,&b)
	for( i=a;i<=b;i++)
	{
		if(fb(i)) printf("%d ",i);
	}
}
