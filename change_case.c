#include<stdio.h>

void change_case(char name[])
{
    int i = 0;
    while(name[i] != '\0')
    {
        if(name[i]>64 && name[i]<92)
            printf("%c",name[i]+32);
        else if(name[i]>96 && name[i]<124)
            printf("%c",name[i]-32);
        else
            printf("%c",name[i]);
        i++;
    }
}


int main()
{
    char name[10];
    printf("Enter the name: ");
    scanf("%s",name);
    change_case(name);
}