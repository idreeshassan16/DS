#include<stdio.h>

void binary(int num)
{
    if (num==0)
        printf("0");
    else
    {
        int r = num%2;
        binary(num/2);
        printf("%d",r);
    }
}

int main()
{
    int num = 8;
    binary(num);
}