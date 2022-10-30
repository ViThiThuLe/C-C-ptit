#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int nto(int n)
{
	if(n<2) return 0;
	for(int i=0;i<sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}

int dem(char s[])
{
	int i,j,k,dem;
	int l=strlen(s);
	for(i=0;i<l;i++)
	{
		dem=0; 
		k=1;
		for( j=0;j<i;j++)
		{
			if(s[i]==s[j]) k= 0;
		}
		if (k==1 && nto(s[i])) 
		{
			for( j=0;j<l;j++)
			{
				if(s[i]==s[j]) dem++;
			}
		}
	}
}
int main()
{
	char s[18];
	gets(s);
	int l=strlen(s);
	int i,dem=0;
	for(i=0;i<l;i++)
	{
		if(isdigit(s[i]) && dem(s[i]))
		{
			printf("%d %d\n",s[i],dem);
		}
	}
}
