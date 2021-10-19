#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0;
	char c[30],f;
	puts("enter sentence");
	gets(c);
	puts("enter specific character");
	scanf("%c",&f);
	for(i=0;i<strlen(c) ;i++,j++)
	{
		if(c[i]==f)
		{
		j=j-1;
		continue;}
		
		c[j]=c[i];
	}
	c[j]='\0';
     puts(c);
	 }
