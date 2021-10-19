#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int i,v=0,c=0,d=0,b=0;
	char h[30];
	puts("enter sentence");
	gets(h);
	for(i=0;i<strlen(h);i++)
	{
		h[i]=tolower(h[i]);
	int a=h[i];
	 if(a<33||a>47)
	{
		if(h[i]==' ')
		b++;
		else if(48<=a&&a<=57)
		d++;
	    else if(h[i]=='a'||h[i]=='e'||h[i]=='o'||h[i]=='u'||h[i]=='i')
		v++;
		else
		c++;
	}
    }
    printf("blank spaces=%d\n consonants=%d\n vowels=%d\n digits=%d\n",b,c,v,d);
}
