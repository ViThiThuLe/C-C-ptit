#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	gets(s1);
	char s2[10];
	gets(s2);
	int i,j;
	int l1=strlen(s1), l2=strlen(s2);
	for( i=0;i<l1;i++)
	{
		int k=1;
		for( j=0;j<l2;j++)
		{
			if(s1[i]==s2[j]) k=0;
		}
		if(k) printf("%c",s1[i]);
//		if(s1[i]==' ' && s1[i+1]==' ')
//		{
//			s1[i]=s1[i+1];
//		}
//		i--;
//		l1--;
	}
}
