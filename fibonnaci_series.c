#include<stdio.h>

// Recursive function to print the Fibonacci sequence starting from the third term
void fibo(int n, int i, int j)
{
    if (n<3)
        return;
    else if (n>2)
    {
        int k = i+j;
        i=j;
        j=k;
        printf("%d ",k);
        fibo(n-1,i,j);
    }
}

int main()
{
    int a,b=0,c=1;
    printf("Enter the upper limit: ");
    scanf("%d",&a);
    if (a==1)
        printf("0");
    else if (a==2)
        printf("0 1");
    else if (a>2)
    {
        printf("0 1 ");
        fibo(a,b,c);
    }
    else
        printf("invalid input \n");
}