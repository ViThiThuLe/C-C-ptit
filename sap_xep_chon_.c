#include<stdio.h>
#include<stdio.h>
#include<math.h>

int main(){
	int n, i, j;
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int min = a[0];
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i] < min){
				min = a[i];
			//	if(a[i] > a[j]){
					
				}
				
		//	}
		}
		for(j=i; j<n;j++){
			if(a[i]>min){
				int k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
		printf("Buoc %d: ",i+1);
		for(j=0; j<n; j++){
			printf("%d ",a[j]);
		}
		printf("\n");
	}
}
