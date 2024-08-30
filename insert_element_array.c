#include <stdio.h>
#define MAX_SIZE 100
int main(){
    int arr[MAX_SIZE];
    int size;
    int i,pos,value;

    //input the size of an array
    printf("Enter the size of an array(max %d):",MAX_SIZE);
    scanf("%d",&size);

    //input the elements of an array
    printf("Enter the elements in array:");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    //here we describe the position where an element is insert
    printf("Enter the position where you want to insert the element(1 to %d): ", size +1);
    scanf("%d ",&pos);

    //we insert the element of an array
    printf("Enter the value: ");
    scanf("%d ",&value);

    if(pos < 1 || pos < size + 1){
        printf("invaild");
    }
    else{
        for(i < size ;i >= pos;i--){
            arr[i] = arr[i-1];
        }
        arr[pos - 1] = value;
        size++;
    }

    printf("Array after Insertion: ");
    for(i= 0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}