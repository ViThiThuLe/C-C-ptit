#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a, &b, &c);
	int min, min1;
	min1=(a<b)?a:b;
	min=(min1<c)?min1:c;
	printf("%d",min);
}
