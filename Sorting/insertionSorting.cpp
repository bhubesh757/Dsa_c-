#include<iostream>
using namespace std;
//initializing them

//Insertion sort
void insertionSort(int a[]) {
	int j = 0 ;
	int temp =0 ;
	for(int i = 1 ; i < 5 ; i ++) {
		temp = a[i] ;
	 	j = i-1;
	 	while(j >= 0 && a[j] > temp) {
	 		a[j+1] = a[j];
	 		j--;
	 	}
	 	a[j+1] = temp;
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

	cout<<"Before sorting"<<endl;

	for(int i = 0 ;i < 5 ; i ++) {
		cout<<myarr[i]<<" ";
	}

	insertionSort(myarr);

	cout<<"After sorting" << endl;

	for(int i = 0 ;i < 5 ; i ++) {
		cout<<myarr[i]<<" ";
	}

	return 0;
}
