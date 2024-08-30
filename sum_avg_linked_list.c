#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to find the sum and average of the elements in the linked list
void findSumAndAverage(struct Node* head, int* sum, float* average) {
    if (head == NULL) {
        printf("The list is empty.\n");
        *sum = 0;
        *average = 0;
        return;
    }
    
    *sum = 0;
    int count = 0;
    
    struct Node* current = head;
    
    while (current != NULL) {
        *sum += current->data;
        count++;
        current = current->next;
    }
    
    *average = (float)(*sum) / count;
}

int main() {
    // Creating a linked list
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);
    head->next->next->next->next = createNode(50);

    int sum;
    float average;
    findSumAndAverage(head, &sum, &average);
    
    printf("Sum of elements in the list: %d\n", sum);
    printf("Average of elements in the list: %.2f\n", average);
    
    // Freeing memory
    struct Node* current = head;
    struct Node* nextNode;
    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }

    return 0;
}
