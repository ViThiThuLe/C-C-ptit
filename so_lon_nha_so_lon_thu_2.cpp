//#include<stdio.h>
//int main(){
//	int n,max=0,max2=0;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++)
//	{
//		if(a[i]>max) max=a[i];
//	}
//	for(int i=0;i<n;i++)
//	{
//		if(a[i]>max2 && a[i]<max) max2=a[i];
//	}
//	printf("%d %d",max,max2);
//}


#include<stdio.h>
int main(){
	int n,max=0,max2=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	max=a[0];
	printf("%d ",max);
	for(int i=1;i<n;i++)
	{
		if(a[i]>max2&&a[i]<max)
		{
			max2=a[i];
		}
	}
	printf("%d",max2);
}

//#include<stdio.h>
//main(){
//	int n, max = 0, max2 = 0;
//	scanf("%d",&n);
//	int a[n];
//	for(int i = 1 ; i <= n ; i++){
//		scanf("%d ", &a[i]);
//	}
//    for (int i = 1 ; i<= n ; i++){
//   		if(a[i] >= max ) max = a[i];
//    }
//    for ( int i = 1 ; i <= n ; i++) {
//    	if( a[i] >= max2 && a[i] < max) max2 = a[i];
//    }
//    printf("%d %d",max,max2);
//}


