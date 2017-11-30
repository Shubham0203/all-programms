#include<stdio.h>
int factorial (int n);
int factorial (int n)
{
int i=1;
int factorial=1;
while
(i<=n)
{
factorial=factorial*i;
i++;
}
printf("%d",factorial);
}
void main()
{
int n;
printf("Enter value of n");
scanf("%d",&n);

factorial();
}

