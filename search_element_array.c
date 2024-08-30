#include <stdio.h>
#define MAX_SIZE 100

int main(){
    int arr[MAX_SIZE];
    int size;
    int i,pos,value,found;

    printf("Enter the size of an array: ");
    scanf("%d",&size);

    printf("Enter the elements in an array: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to search from an array: ");
    scanf("%d",&value);

    for(i=0;i<size;i++){
        if(arr[i]== value)
            {
                found = 1;
                break;
            }
    }

    if(found){
        printf("Element %d found in an array at position %d ",value , i+1);
    }
    else{
        printf("Element %d not found in an array ",value);
    }

    return 0;
}