#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    int i = 0,len = 0;

    //convert to lowercase
    while(str[i] != '\0')
    {
        if(str[i]>64 && str[i]<92)
            str[i] = str[i]+32;
        i++;
    }

    //calculate the length of string
    i=0;
    while (str[i] != '\0')
    {
        len++;i++;
    }

    //check for palindrome
    i = 0;
    while (i<len)
    {
        if (str[i]!=str[len-1])
        {
            printf("not palindome \n");
            return 0;
        }
        i++;len--;
    }
    printf("it is a palindrome \n");
    return 0;
}