//w.c.p to reverse digits of an whole number
#include<stdio.h>
int main()
{
	int digits,n,rev=0;
	printf("enter a digits:");
	scanf("%d",&n);
	while(n>0)
	{
		digits=n%10;
		rev=rev*10+digits;
		n=n/10;
		
	}
	printf("reverse of digits %d:",rev );
	return 0;
}
