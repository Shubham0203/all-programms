#include<stdio.h>
int main()
{
int m,n,c,d,first[10][10],second[10][10],sum[10][10];
printf("give the values of rows and column ");
scanf("%d%d\t",&m,&n);
printf("enter the value of elements of first matrix");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
scanf("%d\t",&first[c][d]);
}
}
printf("give the elements of second matrix");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
scanf("%d\t",&second[c][d]);
sum[c][d]=first[c][d]+second[c][d];
}
}
printf("sum");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
printf("%d\t",sum[c][d]);
printf("\n");
}
return 0;
}

