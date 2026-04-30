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

// Check if two lists match from given nodes
int match(struct Node* a, struct Node* b) {
    while(a != NULL && b != NULL) {
        if(a->data != b->data)
            return 0;
        a = a->next;
        b = b->next;
    }
    return (a == NULL && b == NULL);
}

// Find intersection by value sequence
int findIntersection(struct Node* l1, struct Node* l2) {
    struct Node* temp1 = l1;

    while(temp1 != NULL) {
        struct Node* temp2 = l2;

        while(temp2 != NULL) {
            if(temp1->data == temp2->data) {
                if(match(temp1, temp2)) {
                    return temp1->data;
                }
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }

    return -1; // No intersection
}

int main() {
    int n, m;

    // Input lists
    scanf("%d", &n);
    struct Node* list1 = createList(n);

    scanf("%d", &m);
    struct Node* list2 = createList(m);

    int result = findIntersection(list1, list2);

    // Output
    if(result == -1)
        printf("No Intersection\n");
    else
        printf("%d\n", result);

    return 0;
}