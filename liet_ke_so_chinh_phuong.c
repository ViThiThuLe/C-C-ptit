#include<stdio.h>
#include<math.h>

int main(){
	int m, n, i;
	scanf("%d%d", &m, &n);
	if(m<n){
		int a=sqrt(m);
		int b=sqrt(n);
		if (a*a != m) a++;
		printf("%d\n",b-a+1);
		for(i=a; i<=b; i++){
			 printf("%d", i*i);
		printf("\n");
	}
}
}
