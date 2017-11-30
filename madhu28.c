#include<stdio.h>
int main()
{
int n,i,r;
int m=0;
printf("enter the number to be checked\n");
scanf("%d",&n);
if(n==1)
{
printf("NOT PRIME\n");
}
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
printf("number is not prime\n");
m=1;
break;
}
}
if(m==0)
{
printf("number is prime\n");
}
}

