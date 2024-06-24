#include <stdio.h>

typedef struct Node{

    int value;
    struct Node* next;

} Node;

void printLL(Node* head);

int main(){

    Node c = {.next = NULL, .value = 20};
    Node b = {.next = &c, .value = 15};
    Node a = {.next = &b, .value = 2};

    printLL(&a);

    return 0;
}

void printLL(Node* head){

    Node* current = head;
    while(current != NULL){

        printf("Node Value: %d\n", current->value);
        current = current->next;

    }

}
