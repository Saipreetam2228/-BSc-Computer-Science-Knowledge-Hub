#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node 
{
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Function to insert a new node at the end of the list
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to traverse the linked list and find the minimum value
int findMinimum(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return -1; // Return -1 indicating list is empty
    }

    int min = head->data;
    struct Node* current = head->next;

    while (current != NULL) {
        if (current->data < min) {
            min = current->data;
        }
        current = current->next;
    }

    return min;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL;

    // Insert some elements into the linked list
    insertEnd(&head, 10);
    insertEnd(&head, 5);
    insertEnd(&head, 20);
    insertEnd(&head, 8);

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    // Find the minimum value in the linked list
    int min = findMinimum(head);
    if (min != -1) {
        printf("Minimum value in the linked list: %d\n", min);
    }

    return 0;
}
