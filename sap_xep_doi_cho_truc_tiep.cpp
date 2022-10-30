#include<stdio.h>

//void in(int a[],int n){
 //   for(int i=0;i<n;i++) printf("%d ",a[i]);
   // printf("\n");
//}
void sapxep(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++)
            if(a[i]>a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        printf("Buoc %d: ",i+1);// in(a,n);
    }
}
main(){
    int a[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
    sapxep(a,n);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
}
