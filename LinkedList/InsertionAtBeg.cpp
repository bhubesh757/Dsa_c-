#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//steps 
//create a class Node and initialize them accordingly
//linkedlist contains data and next node ind the node which has the address of the next node
class Node {
public:
	int data;
	Node* next;
	//creating a contructor
	Node(int data) {
		this -> data = data;
		this -> next = NULL;
	}
};

//creating a function for insertion

void InsertAtBeg(Node* head , int d) {
	//creation of new node1
	//storing the address of the newnode temp to the head
	//making a connection between head and temp node
	Node* temp = new Node(d);
	temp -> next = head;
	head = temp;
}

void print(Node* &head) {
	Node* temp = head;

	while(temp != NULL) {
		cout<< temp ->data << " " ;
		temp = temp -> next;
	}
	cout << endl;
}

int main() { 
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	//Linked list
	Node* node1 = new Node(10);
	// cout<<node1 -> data << endl; 
	// cout<<node1 -> next << endl;

	Node* head = node1;
	print(head);
	InsertAtBeg(head , 12);
	print(head);

	InsertAtBeg(head , 23);
	print(head);
	
	return 0;
}
