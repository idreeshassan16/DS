#include <stdio.h>
#define MAX_SIZE 100

int main(){
    int arr[MAX_SIZE];
    int size;
    int i,pos ,found;
    printf("Enter the max size of an array(max %d): ",MAX_SIZE);
    scanf("%d",&size);

    printf("Enter the elements of an array: ");
    for(i = 0;i< size;i++){
        scanf("%d", arr[i]);
    }

    printf("Enter the element to delete from an array:");
    int value;
    scanf("%d",&value);

    found = 0;
    for(i=0;i<size;i++){
        if(arr[i]==value){
            found = 1;
            pos = i;
            break;
        }
    }

    if(found){
        for(i= pos;i<(size -1);i++){
            arr[i] = arr[i + 1];
        }
        size--;
    }

    printf("updated array is: ");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}