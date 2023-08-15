#include<stdio.h>
#include<conio.h>
main()
{
float a,b,c,sum,avg;
printf("Enter three numbers=");
scanf("%f%f%f",&a,&b,&c);
sum=a+b+c;
avg=sum/3;
printf("summation=%.2f and average=%.2f",sum,avg);
return 0;
}