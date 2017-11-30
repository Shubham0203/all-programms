#include<stdio.h>
#include<math.h>
void main()
{
    float radius,area,PI=3.14;
printf("Enter the radius_of_circle\n");
scanf("%f",&radius);
area=PI*radius*radius;
printf("Area of circle =%5.2f\n",area);
}
output

dell@dell-OptiPlex-7040:~$ gcc apekshaaoc.c
dell@dell-OptiPlex-7040:~$ ./a.out
Enter the radius_of_circle
8
Area of circle =200.96
dell@dell-OptiPlex-7040:~$ 





