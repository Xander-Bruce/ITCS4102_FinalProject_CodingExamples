package main

import "fmt"

/*
 *------------------------------------------------------
 *
 * Program written by Zachary "Xander" Bruce
 * Simple Binary Tree walk and print
 *
 * To compile/run this code go to the GO Website here:
 * https://go.dev
 *
 * Go to the downloads page and select the GO build to
 * download depending on your platform.
 *
 * Once you have installed Go, you can run the program
 * by going in the directory with this program and 
 * inputting the command:
 *
 * go run BinaryTree_Go.go
 *
 * Or to compile then run run the command:
 *
 * go build BinaryTree_Go.go
 *
 * then run the compiled executable
 *
 *------------------------------------------------------
*/

type Node struct{

	nodeName string
	value int
	leftChild *Node
	rightChild *Node
}

func printBinaryTree(root *Node){

	fmt.Println("Node: " + root.nodeName + " Value: ", root.value)

	if root.leftChild != nil {
		printBinaryTree(root.leftChild)
	}

	if root.rightChild != nil{
		printBinaryTree(root.rightChild)
	}

}

func main(){

	G := Node{nodeName: "G", value: 42, leftChild: nil, rightChild: nil}
	F := Node{nodeName: "F", value: 21, leftChild: nil, rightChild: nil}
	E := Node{nodeName: "E", value: 35, leftChild: nil, rightChild: nil}
	D := Node{nodeName: "D", value: 300, leftChild: nil, rightChild: nil
	C := Node{nodeName: "C", value: 13, leftChild: &D, rightChild: &E}
	B := Node{nodeName: "B", value: 9, leftChild: &F, rightChild: &G}
	A := Node{nodeName: "A", value: 6, leftChild: &B, rightChild: &C}

	printBinaryTree(&A)

}


