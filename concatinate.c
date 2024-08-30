#include<stdio.h>
int main()
{
    char str1[100],str2[100],str3[200];

    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);

    int i = 0;
    while(str1[i] != '\0')
    {
        str3[i] = str1[i];
        i++;
    }

    int j = 0;
    while (str2[j] != '\0')
    {
        str3[i] = str2[j];
        j++;i++;
    }

    str3[i] = '\0';

    printf("%s",str3);

    return 0;
    
}