#include<stdio.h>

int fac(int a)
{
    if (a==0)
        return 1;
    else
        return a * fac(a-1);
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("factorail of %d is %d",num,fac(num));
    return 0;
}