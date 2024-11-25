#include<stdio.h>

int fact(int n);
int main()
{
    printf("factorial =%d",fact(5));
    return 0;
}
int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    
    int factNm=fact(n-1);
    int factN=factNm*n;
    return factN;
}