#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];

    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);

    int len_str1 = strlen(str1);
    int len_str2 = strlen(str2);

    if (len_str1 == len_str2)
    {
        int i = 0;
        while (str1[i] != '\0')
        {
            if (str1[i] != str2[i])
            {
                printf("strings are not equal \n");
                return 0;
            }i++;
        }
        printf("Strings are equal \n");
    }
    else
        printf("strings are not equal \n");   
    return 0;
}