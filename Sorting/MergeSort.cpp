#include<iostream>
using namespace std;


void Merge(int a[] , int lb , int mid , int ub) {
	int i = lb;
	int j  = mid +1;
	int k = ub;

	int b[5];
	//temporary array which contains 5 arrays which stores the values into it

	while(i<mid && j< ub) {
		if(a[i] <= a[j]) {
			b[k] = a[i];
			i++ ;
			k++;
		}
		else {
			b[k] = a[j];
			j++ ;
			k++;
		}
		//if reaches its limits
	}
	if(i>mid) {
			while(j<=ub) {
				b[k] = a[j];
				j++ ; k++;
			}
			
		}
		else {
			while(i<=lb){
				b[k] = a[i];
				i++ ;k++;
			}
		}

		for(int s = 0 ; s<5 ; s++ ) {
			a[5] = b[5];
		}
}


void MergeSort(int a[] , int lb , int ub ){
	if(lb<ub) {
		int mid = (lb+ub)/2;
		//using recursion
		MergeSort(a , lb , mid);
		MergeSort(a , mid+1 , ub);
		Merge(a , lb,mid , ub);
	}

}





int main() {
	// initializing 
	//int a[5] = {4, 6 ,1 ,2 7};
	int a[5];

	for(int i = 0 ; i<5 ;i++) {
		cin>>a[i];
	}

	cout<<"Before Merge Sorting"<<endl;

	for(int i = 0 ; i<5 ;i++) {
		cout<<a[i]<<" ";
	}

	MergeSort(a , 0  , 4);

	cout<<"After Merge sort"<< endl;

	for(int i = 0 ; i<5 ;i++) {
		cout<<a[i]<<" ";
	}


	return 0;
}
