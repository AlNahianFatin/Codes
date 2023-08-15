#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    printf("Enter three numbers=");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("%d is large number",a);
        else
            printf("%d is large number",c);
    }
    else
    {
        if(b>c)
            printf("%d is large number",b);
        else
            printf("%d is large number",c);
    }
    getchar();
}