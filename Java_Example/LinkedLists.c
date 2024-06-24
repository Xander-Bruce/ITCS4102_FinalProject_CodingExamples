#include <stdio.h>

/*
    *-----------------------------------------------------------------
    *
    * Linked List Walk and Print
    * Written by Zachary "Xander" Bruce
    *
    * To compile and run this program make sure you have a C compiler
    * installed on your computer, if you do not ensure you find a
    * compiler, i.e. GCC.
    *
    * Once you have a compiler installed (like GCC) use the command 
    * line argument:
    *
    *       gcc -o LinkedLists_C LinkedLists.c
    *
    *-----------------------------------------------------------------
*/

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
