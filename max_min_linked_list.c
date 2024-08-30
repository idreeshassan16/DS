#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

// Function to find the minimum and maximum values in the linked list
void findMinMax(struct Node* head, int* min, int* max) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    
    *min = INT_MAX;
    *max = INT_MIN;
    
    struct Node* current = head;
    
    while (current != NULL) {
        if (current->data < *min) {
            *min = current->data;
        }
        if (current->data > *max) {
            *max = current->data;
        }
        current = current->next;
    }
}

int main() {
    // Creating a linked list
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(5);
    head->next->next->next = createNode(30);
    head->next->next->next->next = createNode(15);

    int min, max;
    findMinMax(head, &min, &max);
    
    printf("Minimum value in the list: %d\n", min);
    printf("Maximum value in the list: %d\n", max);
    
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
