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
