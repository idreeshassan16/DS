#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to find the minimum and maximum numbers in the linked list
void findMinMax(Node* head, int* min, int* max) {
    *min = head->data;
    *max = head->data;

    Node* current = head->next;
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

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Create a sample linked list: 5 -> 2 -> 8 -> 3 -> 1 -> 6 -> 4
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = 5;
    head->next = (Node*)malloc(sizeof(Node));
    head->next->data = 2;
    head->next->next = (Node*)malloc(sizeof(Node));
    head->next->next->data = 8;
    head->next->next->next = (Node*)malloc(sizeof(Node));
    head->next->next->next->data = 3;
    head->next->next->next->next = (Node*)malloc(sizeof(Node));
    head->next->next->next->next->data = 1;
    head->next->next->next->next->next = (Node*)malloc(sizeof(Node));
    head->next->next->next->next->next->data = 6;
    head->next->next->next->next->next->next = (Node*)malloc(sizeof(Node));
    head->next->next->next->next->next->next->data = 4;
    head->next->next->next->next->next->next->next = NULL;

    printf("Linked List: ");
    printList(head);

    int min, max;
    findMinMax(head, &min, &max);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}