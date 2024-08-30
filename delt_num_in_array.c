#include <stdio.h>
int main()
{
    int n = 8;
    int A[] = {1,3,4,3,4,5,6,7};
    int item ,x=0;
    for(int i = 0;i<n;i++)
        printf("%d",A[i]);
    printf("\n");

    printf("Enter the item to  delete:");
    scanf("%d",&item);

    for(int i = 0;i < n;i++)
    {
        if(A[i]==item){
            for(int j=i;j < n-1;j++)
            {
                A[j] = A[j+1];
            }
            n--;
            i--;
        }
    }
    for(int i=0;i < n; i++)
        printf("%d",A[i]);
}