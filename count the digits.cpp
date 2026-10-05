//w.c.p to count the digits of a whole number
#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter a int :");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("count of the digits= %d",count);
}
