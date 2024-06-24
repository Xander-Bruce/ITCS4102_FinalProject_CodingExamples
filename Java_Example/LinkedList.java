/*
----------------------------------------------------------

Program Written by Zachary "Xander" Bruce
Linked List Printing

To run this file make sure you have the latest Java runtime
by going to the following website:

https://www.oracle.com/java/technologies/downloads/

and selecting the download for the platform you are on,
then the corresponding download package.
Once you have installed the Java runtime open your teriminal
in the directory with this file and to run it on the interperter
input the command:

java LinkedList.java

----------------------------------------------------------
*/

public class LinkedList{

	private int length;
	private Node head;
	private Node end;

	public LinkedList(){

		length = 0;
		head = null;
		end = null;

	}

	//Method for adding more nodes onto the linked list object
	public void addNode(Node newNode){

		if(head == null){
			head = newNode;
			end = head;
		}
		else{
			Node current = end; // Creating temp variable to set next
			end = newNode;
			current.setNext(end); // Setting last node in the linked list to the new node
		}
		
		length++;
	}

	//Getter for linked list length
	public int getLength(){
		return length;
	}

	//Method for printing all the nodes and values in the linked list
	public void printLL(Node n){

		System.out.println("Node: " + n.getName() + ", value: " + n.getValue() );
		if(n.getNext() != null) printLL( n.getNext() );

	}
	
	//The main function that is run when the program is run
	public static void main(String[] args){

		LinkedList ll = new LinkedList();
		Node D = new Node("D", 10);
		Node C = new Node("C", 13);
		Node B = new Node("B", 9);
		Node A = new Node("A", 1);

		ll.addNode(A);
		ll.addNode(B);
		ll.addNode(C);
		ll.addNode(D);
		System.out.println("List Length: " + ll.getLength() );
		ll.printLL(ll.head);
	}

}

//Node Object class to be stored in linked lists
class Node{

	private String nodeName;
	private int value;
	private Node next;

	//Node Object Constructor
	public Node(String nodeName, int value){

		this.nodeName = nodeName;
		this.value = value;

	}


	//Getter for Node Value
	public int getValue(){

		return value;

	}

	//Getter for next Node
	public Node getNext(){

		return next;

	}

	//Setter for next Node
	public void setNext(Node next){

		this.next = next;

	}

	//Getter for Node Name
	public String getName(){

		return nodeName;

	}

	public static void main(String[] args){}

}

