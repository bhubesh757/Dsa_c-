#include<iostream>
using namespace std;


void BubbleSort(int a[] ){
	for(int i = 0 ;i<5 ; i++) {
		for(int j = 0 ; j<(5-i-1) ; j++ ){
			if(a[j] > a[j+1] ) {
				//swap
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}


int main() {
	// initializing 
	//int a[5] = {4, 6 ,1 ,2 7};
	int arr[5];
	int n ;
	cout<<"enter 5 intergers in any order :" <<endl;
	for(int i = 0 ; i<5 ;i++) {
		cin>>arr[i];
	}

	cout<<"Before Bubble Sort"<<endl;

	for(int i = 0 ; i<5 ;i++) {
		cout<<arr[i]<<" ";
	}

	BubbleSort(arr);

	cout<<"After Bubble sort"<< endl;

	for(int i = 0 ; i<5 ;i++) {
		cout<<arr[i]<<" ";
	}


	return 0;
}



// some changes in the main function with running code

#include <iostream>
#include<bits/stdc++.h>

using namespace std;


void bubbleSort (int a[] , int n) {
	for(int i = n-1; i>= 1 ; i-- ) {
		int swap = 0;
		for(int j = 0 ; j <= i-1 ; j++) {
			if(a[j] > a[j+1]) {
				int temp = a[j+1] ;
				a[j+1] = a[j] ;
				a[j] = temp;
				swap = 1;
			}
		}
		//why swap int , it checks whether the arra is swaped or not , if sorted , it breaks and comes out of the loop
		if(swap == 0 ) {
			break;
		}
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
	bubbleSort(arr, n);
	for(int i = 0 ; i< n ; i++) {
		cout<<arr[i] << " " <<  endl;
	}


	return 0;
}
