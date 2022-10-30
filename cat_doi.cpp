#include<stdio.h>
#include<string.h>


int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char s[18];
		gets(s);
		for(int i=0;i<strlen(s);i++)
		{
		//	if(s[i]!=0 || s[i]!=1 || s[i]!=6 || s[i]!=8 || s[i]!=9)
		//	{
		//		printf("INVALID");
		//		break;
		//	}
		//	else 
		//	{
		//		if(s[i]==1) s[i]=1;
		//		else 
					if(s[i]==0 || s[i]==6 || s[i]==8 || s[i]==9) s[i]=0;
		//	}
			printf("%c ",s[i]);
		}
		printf("\n");
	} 
	 
} 
 
