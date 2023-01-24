#include<iostream>
using namespace std;


void BubbleSort(int a[] , int n){
	for(int i = 0 ;i<n-1 ; i++) {
		for(int j = 0 ; i<n-i-1 ; j++ ){
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
	int a[5];
	int n ;
	cout<<"enter 5 intergers in any order :" <<endl;
	for(int i = 0 ; i<5 ;i++) {
		cin>>a[i];
	}

	cout<<"Before Bubble Sort"<<endl;

	for(int i = 0 ; i<5 ;i++) {
		cout<<a[i]<<" ";
	}

	BubbleSort(a , 5);

	cout<<"After Bubble sort"<< endl;

	for(int i = 0 ; i<5 ;i++) {
		cout<<a[i]<<" ";
	}


	return 0;
}
