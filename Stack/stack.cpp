#include<iostream>

using namespace std;

//create a class
class Stack {
	private :
	int top ;
	int a[5];

	public :
	Stack () {
		top = -1;

		for (int i = 0; i < 5; ++i)
		{
			a[i] = 0;
		}
	}

	bool isEmpty() {
		if(top == -1 ) return true;
		else 
		return false;
	}

	bool isFull() {
		if(top == 4) 
			return true;
		else
			return false;
	}
	//push

	void push(int val ) {
		if(isFull()) {
			cout<<"Stack Overflow";
		}
		else {
			//currently in -1 and need to increemnt push the val in a[top]
			top++;
			a[top] = val;
		}
	}

	int pop() {
		if(isEmpty()) {
			cout<<"Stack Underflow";
			return 0 ;
		}
		else {
			int item = a[top];
			a[top] = 0;
			top--;
			return item;
		}
	}
	//
	int peek(int pos) {
		if(isEmpty()) {
			cout<<"Stack is empty";
			return 0;
		}
		else {
			return a[pos];
		}
	}

	void display() {
		cout<<"All the values in the stack are" ;
		for (int i = 4; i >=0 ; i--)
		{
			cout<<a[i]<<endl;
		}
	}

};

int main() {
	Stack s1;
	int option , position , value;

	do {
		cout<< "select the operation below" ;
		cout<<"1.Push()"<< endl;
		cout<<"2.pop()"<< endl;
		cout<<"3.isFull()"<< endl;
		cout<<"4.isEmpty()"<< endl;
		cout<<"5.peek()"<< endl;
		cout<<"6.display()"<< endl;

		cin>> option ;

		switch(option) {
		case 1 :
			cout<<"Enter an item to push in to the stack"<<endl;
			cin>>value;
			s1.push(value);
			break;
		case 2:
			cout<<"poped value"<<  s1.pop()<<endl;
			break;
		case 3:
			if(s1.isEmpty()) {
				cout<<"stack is empty";
			} 
			else {
				cout<<"Stack is not empty"<<endl;
				break; 
			}
		case 4:
			if(s1.isFull()) {
				cout<<"stack is full";
			} 
			else {
				cout<<"Stack is not full"<<endl;
				break; 
			}
		case 5 :
			cout<<"enter the position"<<endl;
			cin>>position;
			cout<<"peek called" <<position<< "is" << s1.peek(position)<<endl;
			break;
		case 6 :
			cout<<"display"<<endl;
			s1.display();
			break;
		}
		


	}
	while (option!=0);
	return 0;
}
