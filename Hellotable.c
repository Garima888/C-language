#include<stdio.h>

int main()
{
    int n,table;
printf("\n enter no.: ");
scanf("\n %d",&n);
for(int i=10; i>=1; i--) {
table=n*i;
printf("\n %d*%d=%d",n,i,table);
} 
 return 0;
}