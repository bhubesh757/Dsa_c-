#include <iostream>

using namespace std;

class Queue {
	private :
	int front;
	int rear ;
	int a[5];

	public:
	Queue () {
		 front = -1;
		 rear = -1;
		 for (int i = 0; i < 5; ++i)
		 {
		 	a[i] = 0;
		 }
	}

	bool isEmpty () {
		if(front == -1 && rear == -1) return true;
		else
		 return false;
	}

	bool isFull() {
		if(rear == 4)  return true;
		else
		return false;

	}

	void enqueue (int val) {
		if(isFull()) {
			cout<<"the Queue is full";
			return;
		}
		else if(isEmpty()){
			front = rear = 0;
			a[rear] = val;
		}
		else {
			rear ++;
			a[rear] = val;
		}

	}

	int dequeue(){

		if(isEmpty()) {
			cout<<"the Queue is empty";
			return 0;
		}
		else if(front == rear) {
			int x = a[front];
			a[front] = 0;
			front = rear = -1;
			return  x;
		}
		else {
			int x = a[front];
			a[front] = 0;
			front ++;
			return  x;
		}
	}

	void display () {
		cout<<"All the values that is present in hthe queues are " <<endl;
		for (int i = 5; i >=0; i--) 
		{
			cout<<a[i]<< " "<<endl;
		}
	}


};

int main() {

	Queue q1;
	int option , value ;
	do {
		cout<< "select the operation below" ;
		cout<<"1.Enqueue()"<< endl;
		cout<<"2.Dequeue()"<< endl;
		cout<<"3.isFull()"<< endl;
		cout<<"4.isEmpty()"<< endl;
		cout<<"5.peek()"<< endl;
		cout<<"6.display()"<< endl;

		cin>> option ;

		switch(option) {
		case 1 :
			cout<<"enter the value that to be enqueued" ;
			cin>>value;
			q1.enqueue(value);
			break;
		case 2:
			cout<<"dequeue the value need to remove"<<q1.dequeue()<<endl;
			break;
		case 3:
			if(q1.isFull()) {
				cout<<"queue is full";
			}
			else {
				cout<<"not full";
			}
			break;
		case 4:
			if(q1.isEmpty()) {
				cout<<"queue is empty";
			}
			else {
				cout<<"not empty";
			}
			break;
		case 5 :
			cout<<"display function called";
			q1.display();
			break;
	

	}
}
	while (option!=0);

	return 0;
}


