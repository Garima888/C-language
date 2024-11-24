#include<stdio.h>


void sum(int a,int b);
int main()
{
    int a;
    printf("\n enter a no.");
    scanf("%d",&a);
    int b; 
    printf("\n enter b no.");
    scanf("%d",&b);
    sum(a,b);
    printf("\n sum=%d");

    return 0;
}
void sum(int a,int b)
{
    int s=a+b;
}