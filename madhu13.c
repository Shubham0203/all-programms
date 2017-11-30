#include<stdio.h>
int main()
{
int num,a,n;
int sum=0;
printf("\n,Enter any digit number");
scanf("%d,"&num);
while
{
n=num;
a=num%10;
num=num/10;
sum=sum+a;
}
printf("\n The sum of 4 digit of %d is %d",n,sum);
return 0
}
