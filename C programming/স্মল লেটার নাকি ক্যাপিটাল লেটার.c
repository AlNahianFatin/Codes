#include<stdio.h>
#include<conio.h>
main()
{
    char x1;
    printf("Enter a letter");
    scanf("%c",&x1);
    if(x1>='a'&&x1<='z')
    {
        printf("Small letter");
    }
    else if(x1>='A'&&x1<='Z')
    {
        printf("Capital letter");
    }
    else
    {
        printf("You haven't entered a,letter");
    }
    getchar();
}