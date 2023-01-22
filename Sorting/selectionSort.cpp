#include<iostream>
using namespace std;
//initializing them

//Insertion sort
void selectionSort(int a[]) {
	for(int i = 0 ; i < 4 ; i++) {
		int min = i ;
		for(int j = i+1 ; j< 5 ; j++) {
			if(a[j] < a[min]) {
				min = j;
			}
		}
		if(min!=i) {
			int temp = a[min];
			a[min] = a[i];
			a[i] = temp;
		}
	}

}



int main() {
	//lets initialize the array
	//taking the input from the user and loop the array throw out them
	int myarr[5];
	cout<<"Enter the number in any order"<<endl;
	for(int i = 0 ;i < 5 ; i ++) {
		cin>>myarr[i];
	}

	cout<<"unsorted array"<<endl;

	for(int i = 0 ;i < 5 ; i ++) {
		cout<<myarr[i]<<" ";
	}

	selectionSort(myarr);

	cout<<"Sorted array" << endl;

	for(int i = 0 ;i < 5 ; i ++) {
		cout<<myarr[i]<<" ";
	}

	return 0;
}
