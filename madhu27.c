#include<stdio.h>
int man()
{
int c,n;
printf("three random numbers in[1,50]\n");
for(c=1;c<=3;c++)
{
n=rand()%50+1;
printf("%d\n",n);
}
}
