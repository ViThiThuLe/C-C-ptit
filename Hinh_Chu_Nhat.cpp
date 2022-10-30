#include<stdio.h>
int main() {
	int n;
    scanf("%d",&n);
    int a; 
    int sochan=0;
	int sole=0; 
	while(n!=0){
		a=n%10;
		if(a%2==0)sochan++;
		else sole++; 
			n=n/10;
	} 
	printf("%d %d",sochan,sole); 
}
