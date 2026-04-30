#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Create linked list
struct Node* createList(int n) {
    struct Node *head = NULL, *temp = NULL, *newNode;

    for(int i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    return head;
}

// Count occurrences of key
int countOccurrences(struct Node* head, int key) {
    int count = 0;

    while(head != NULL) {
        if(head->data == key) {
            count++;
        }
        head = head->next;
    }

    return count;
}

int main() {
    int n, key;

    // Input
    scanf("%d", &n);
    struct Node* head = createList(n);

    scanf("%d", &key);

    // Count and print result
    int result = countOccurrences(head, key);
    printf("%d\n", result);

    return 0;
}