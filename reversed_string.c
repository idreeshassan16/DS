#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main(){
    char str[MAX_SIZE];
    int length ,i;

    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);

    //calculate the length of an string (excluding the newline )
    length = strlen(str)- 1;

    for(i = 0;i< length/2;i++){
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    printf("Reversed string is: %s ",str);
}