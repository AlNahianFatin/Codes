#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    float a,b,c,s,area;
    printf("Enter three lengths=");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s-a)*(s-b)*(s-c);
    printf("area=%.5f",area);
    getch();
}