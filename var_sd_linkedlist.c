#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

// Function to calculate the sum and average of the elements in the linked list
void calculateSumAndAverage(struct Node* head, int* sum, float* average, int* count) {
    *sum = 0;
    *count = 0;
    struct Node* current = head;
    
    while (current != NULL) {
        *sum += current->data;
        (*count)++;
        current = current->next;
    }
    
    if (*count > 0) {
        *average = (float)(*sum) / (*count);
    } else {
        *average = 0;
    }
}

// Function to calculate the variance and standard deviation of the elements in the linked list
void calculateVarianceAndStdDev(struct Node* head, float* variance, float* stdDev) {
    int sum, count;
    float average;

    calculateSumAndAverage(head, &sum, &average, &count);

    if (count == 0) {
        *variance = 0;
        *stdDev = 0;
        return;
    }
    
    float sumOfSquares = 0.0;
    struct Node* current = head;

    while (current != NULL) {
        sumOfSquares += pow((current->data - average), 2);
        current = current->next;
    }

    *variance = sumOfSquares / count;
    *stdDev = sqrt(*variance);
}

int main() {
    // Creating a linked list
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);
    head->next->next->next->next = createNode(50);

    float variance, stdDev;
    calculateVarianceAndStdDev(head, &variance, &stdDev);
    
    printf("Variance of elements in the list: %.2f\n", variance);
    printf("Standard deviation of elements in the list: %.2f\n", stdDev);
    
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
