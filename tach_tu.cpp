#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' ') printf("\n");
		else printf("%c",s[i]);
	}
}
