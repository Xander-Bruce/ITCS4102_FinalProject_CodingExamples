#include <stdio.h>

/*
    *-----------------------------------------------------------------
    *
    * Binary Tree Walk and Print
    * Written by Zachary "Xander" Bruce
    *
    * To compile and run this program make sure you have a C compiler
    * installed on your computer, if you do not ensure you find a
    * compiler, i.e. GCC.
    *
    * Once you have a compiler installed (like GCC) use the command 
    * line argument:
    *
    *       gcc -o BinaryTree_C BinaryTree.c
    *
    *-----------------------------------------------------------------
*/

typedef struct Node{

    char nodeName;
    int value;
    struct Node* leftChild;
    struct Node* rightChild;


}Node;

void printBinaryTree(Node* root);


int main(){

    Node G = {.nodeName = 'G',.value = 12, .leftChild = NULL, .rightChild = NULL};
    Node F = {.nodeName = 'F',.value = 7, .leftChild = NULL, .rightChild = NULL};
    Node E = {.nodeName = 'E',.value = 21, .leftChild = NULL, .rightChild = NULL};
    Node D = {.nodeName = 'D',.value = 42, .leftChild = NULL, .rightChild = NULL};
    Node C = {.nodeName = 'C',.value = 2, .leftChild = &D, .rightChild = &E};
    Node B = {.nodeName = 'B',.value = 13, .leftChild = &F, .rightChild = &G};
    Node A = {.nodeName = 'A',.value = 1, .leftChild = &B, .rightChild = &C};

    printBinaryTree(&A);

    return 0;

}

void printBinaryTree(Node* root){

    printf("Node: %c, Value: %d\n",root->nodeName, root->value);
    if(root->leftChild != NULL) printBinaryTree(root->leftChild);
    if(root->rightChild != NULL) printBinaryTree(root->rightChild);

}
