//2+5+8+11+14+..upto n terms. w.c.p to calculate sum of the given series.
#include<stdio.h>
int main()
{
	int n,i=2,sum=0;
	printf("Enter the N terms :");
	scanf("%d",&n);
	while(i<=n){
	i+=3;
	sum+=i;}
	printf("total sum of 2 to n:%d",sum);
}
