#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function prototypes
void insertAtPosition(Node** head, int data, int position);
void deleteAtPosition(Node** head, int position);
void reverseList(Node** head);
int countNodes(Node* head);
void printList(Node* head);

// Main function
int main() {
    Node* head = NULL;
    int choice, data, position;

    do {
        printf("\nMenu:\n");
        printf("1. Insert at specific position\n");
        printf("2. Delete at specific position\n");
        printf("3. Reverse the linked list\n");
        printf("4. Count the nodes in the linked list\n");
        printf("5. Print the linked list\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter position to insert at: ");
                scanf("%d", &position);
                insertAtPosition(&head, data, position);
                break;
            case 2:
                printf("Enter position to delete at: ");
                scanf("%d", &position);
                deleteAtPosition(&head, position);
                break;
            case 3:
                reverseList(&head);
                break;
            case 4:
                printf("Number of nodes: %d\n", countNodes(head));
                break;
            case 5:
                printList(head);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 6.\n");
        }
    } while (choice != 6);

    return 0;
}

// Function to insert a new node at a specific position
void insertAtPosition(Node** head, int data, int position) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    Node* temp = *head;
    newNode->data = data;
    newNode->next = NULL;

    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to delete a node at a specific position
void deleteAtPosition(Node** head, int position) {
    Node* temp = *head;
    Node* prev = NULL;

    if (position == 1) {
        *head = temp->next;
        free(temp);
        return;
    }

    for (int i = 1; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// Function to reverse the linked list
void reverseList(Node** head) {
    Node* prev = NULL;
    Node* current = *head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

// Function to count the number of nodes in the linked list
int countNodes(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
