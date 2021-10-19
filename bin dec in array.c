#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,sum=0,a[8],j;
	long int n;
	printf("enter bin no.");
	scanf("%ld",&n);
while(n!=0)
{
    a[i]=n%10;

	i++;
	n=n/10;	
}
for(j=0;j<i;j++)
	sum=sum+(a[j]*pow(2,j));
printf("decimal no.=%d",sum);
}
