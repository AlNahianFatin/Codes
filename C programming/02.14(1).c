#include <stdio.h>

int main()
{
    int num1,num2,sum,subs,multi,div;
    printf("Please enter a number:");
    scanf("%d",&num1);
    printf("Please enter another number:");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("%d+%d=%d\n",num1,num2,sum);
    subs=num1-num2;
    printf("%d-%d=%d\n",num1,num2,subs);
    multi=num1*num2;
    printf("%d*%d=%d\n",num1,num2,multi);
    div=num1/num2;
    printf("%d/%d=%d\n",num1,num2,div);
    return 0;
}
