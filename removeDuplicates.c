// removing duplicates from a sorted list using linked list

#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

// Function to delete duplicates
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL) {
        return NULL;
    }

    struct ListNode* temp = head;

    while (temp->next != NULL) {
        if (temp->val == temp->next->val) {
            struct ListNode* duplicate = temp->next;
            temp->next = temp->next->next; // skip duplicate
            free(duplicate); // free memory for removed node
        } else {
            temp = temp->next;
        }
    }

    return head;
}

// Helper function to create new node
struct ListNode* newNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

// Helper function to print linked list
void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

// Example usage
int main() {
    // Create linked list: 1 -> 1 -> 2 -> 3 -> 3
    struct ListNode* head = newNode(1);
    head->next = newNode(1);
    head->next->next = newNode(2);
    head->next->next->next = newNode(3);
    head->next->next->next->next = newNode(3);

    printf("Original list:\n");
    printList(head);

    head = deleteDuplicates(head);

    printf("List after removing duplicates:\n");
    printList(head);

    return 0;
}
