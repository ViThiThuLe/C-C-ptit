#include<stdio.h>
int main()
{
	int n, i, j;
	scanf("%d",&n);
	int a[n];
	for( i=0; i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<n-1;i++){
 		for( j=i+1; j<n;j++){
			if(a[i]>a[j]){
				int c = a[i];
				a[i] = a[j];
				a[j] = c;		
			}
		}
		printf("Buoc %d: ",i+1);
		int k;
		for( k=0; k<n; k++)
			printf("%d ",a[k]);
		printf("\n");
	}
}
