//w.c.p to find the sum of digits 
#include<stdio.h>
int main()
{
	int sum=0,temp,num,remainder;
	printf("enter a int :");
	scanf("%d",&num);
	while(temp>0)
	{
		remainder=temp%10;
	    sum+=remainder;
	    temp/=10;
		
	}
	
    printf("sum of digits of %d=%d\n",num,sum);
    return 0;
	
}
