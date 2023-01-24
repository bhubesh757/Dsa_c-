#include<iostream>
using namespace std;
//initializing them

//creating a getmax function
//getting max value from the array ;
int getMax(int a[], int n ) {
	int max = a[0];
	for(int i = 1 ; i < n ; i ++) {
		if(a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

//range is different and size is different
// where r is range , n is the size of the array
//here a is the input arrar , count is initialized as 0 and then it will updated to the addition of the prev and curr values

void countingSort(int a[] , int n , int pos) {
	int upd_count[n];
	int count[10] = {0};

	for(int i = 0 ; i < n ;i++) { 
		++count[a[i]/pos % 10 ];
	}
	for(int i = 1 ; i < 10 ; i++) {
		count[i] = count[i] + count[i-1];
	} 

	for(int i = n-1 ; i>=0 ; i--) {
		upd_count[--count[a[i]/pos % 10] -1] = a[i];
		count[a[i]/pos % 10]--;
	}
	for(int i = 0 ; i < n ; i++) {
		a[i] = upd_count[i];
	}

}

void RadixSort(int a[] , int n ) {
	int max = getMax(a, n);
	for(int pos = 1 ; max/pos >0 ; pos*10){
		countingSort(a,n,pos);
	}

}



int main() {
	//lets initialize the array
	int n;
	cout<<"Enter the size of the array:" << endl;
	cin>>n;
	int a[n];

	cout<<"Enter" <<n<<"integers in any order"<<endl;

	for(int i=0;i<n;i++) 
		cin>>a[i];
	
	cout<<endl<<"Before Sorting" <<endl;

	for(int i = 0 ; i< n ;i++) 
		cout<<a[i] <<" ";

	//calling the fucntion
	RadixSort(a , n);


	cout<<endl<<"After Sorting"<<endl;

	for(int i = 0 ; i<n ; i++) 
		cout<<a[i] <<" ";
	
	

	return 0;
}
