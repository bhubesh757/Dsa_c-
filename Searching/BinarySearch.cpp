#include<iostream> 
using namespace std;

//LinearSearch 

int BinarySearch (int a[] , int l , int r , int data ) {

	//initialize them

	while(l<r) {
		int mid = (l+r) / 2;
		if(data == a[mid]){
			return mid;
		}
		else if (data < a[mid]) {
			r = mid -1;
		}
		else {
			l = mid +1;
		}
	}
	return -1;
	
}

int main () {
	//here the num is the data to be searched
	int num;
	int a[10];
	int output;

	cout<<"Enter the numbers in ascending order" << endl;
	for(int i = 0 ; i < 10 ; i++) {
		cin>>a[i];
	}

	cout<<"Enter the number neeed to search" << endl;
	cin>> num;

	output = BinarySearch(a , 0 , 9 , num);

	if(output == -1) {
		cout<<"Elemtent not found"<<endl;

	}
	else{
		cout<<"Elemtent  found in the above array"<< output<<endl;
	}

	return 0;
}
