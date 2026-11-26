#include<stdio.h>
void sum();
void avg();
void mp();
void main()
{
    sum();
    avg();
    mp();
} 
 void sum()
{
    int a=79,b=56,c;
    c=a+b;
    printf("\nSum is %d",c);
}
 void avg(){
    float a=93,b=78,c;
    c=(a+b)/2;
    printf("\nAverage is %f",c);
 }
 void mp(){
    int a=80,b=56,c;
    c=a*b;
    printf("\nMultiplecation is %d",c);
 }
