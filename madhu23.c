#include<stdio.h>
intmain()
{
intn,i=1,sum=0;

printf("entre a number:);


scanf("%d",&n);
while(i<n){
if(n%i==0)
sum=sum+i;








i++;
}
if(sum==n)
printf("%d is aperfect number",i);
else
printf("%d is not a perfect number",i);
return0;
}








