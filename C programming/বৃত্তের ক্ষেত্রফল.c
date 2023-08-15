#include<stdio.h>
#include<conio.h>
main()
{
    float r,area;
    printf("Enter the radius=");
    scanf("%f",&r);
    area=3.1416*r*r;
    printf("area=%.5f",area);
    getch();
}