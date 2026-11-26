#include<stdio.h>
int main()
{
    int a,b,c,r;
    printf("enter a 1st number : ");
    scanf("%d",&a);
    printf("enter a 2nd number : ");
    scanf("%d",&b);
    printf("enter your choice 1-for sum 2-for multification 3-for subtraction : ");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        {
            r=a+b;
            printf("total sum is :%d",a+b);
            break;
        }
        case 2:
        {
            r=a*b;
            printf("multification is :%d",a*b);
            break;
        }
        case 3:
        {
            r=a-b;
            printf("subtraction is :%d",a-b);
            break;
        }
    }
    return 0;
}