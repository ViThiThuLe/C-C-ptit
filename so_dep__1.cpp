#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h> 
int ktra(char s[])
{
	char x[500];
	strcpy(x,s);
	strrev(s);
	if(strcmp(x,s)==0) return 1;
	return 0;
}

int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		int k,m;
		char s[500];
		gets(s);
		for (int i=0; i<strlen(s); i++)
		{
			k=0;
		//	if (isdigit(s[i]))
		//	{
				
				if(s[i]%2!=0) break;
				if(s[i]%2==0) k=1;
		//	}
		}
		if(ktra(s) && k==1) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
