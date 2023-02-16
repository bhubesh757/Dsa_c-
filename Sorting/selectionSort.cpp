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

//working code


#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void selectionSort(int a[] , int n) {
	for(int i = 0 ; i <= n-2 ; i++) {
		int min = i;
		for(int j = i; j<= n-1 ; j++) {
			if(a[j] <  a[min]) 
				min = j;
		}

		//swap them
		int temp = a[i];
		a[i] = a[min];
		a[min] =temp;
	}
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;

	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}

//calling the fucntion
	selectionSort(arr , n);
	for(int i = 0 ; i< n ; i++) {
		cout<<arr[i] << " " <<  endl;
	}


	return 0;
}
