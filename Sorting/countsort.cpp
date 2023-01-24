#include <iostream>

using namespace std;

//counting sort algorithm

void countingSort(int a[] , int n , int r) {
	int upd_count[s];
	int count[r];

	for(int i = 0 ; i < r ;i++) {
		count[i] = 0;
	}

	for(int i = 0 ; i < n ;i++) { 
		++count[a[i]];
	}
	for(int i = 1 ; i < r ; i++) {
		count[i] = count[i] + count[i-1];
	} 

	for(int i = n-1 , i>=0 ; i--) {
		upd_count[--count[a[i]]] = a[i];
	}
	for(int i = 0 ; i < n ; i++) {
		a[i] = upd_count[i];
	}

}



int main()
{
    int size = 0;
    int range = 10; // its very imp , 
    //taking input from the user;
    cout<<"Enter size of an array";
    cin >> size;
    int myarray[size]; //taking the input from the user and storing it in the array
    
    cout<<"Enter" << size <<"numbers in any order from the range of 0 - 9"<< endl;
    
    for(int i = 0 ; i<=size ; i++) {
        cin>>myarray[i];
        
    }
    
    cout<<"Before sorting" << endl;
    
    for(int i = 0;i<=size ; i++) {
        cout<<myarray[i] <<" ";
    }
    cout<<endl;
    
    // couting sort function to be called here
    countingSort(myarray , size , range);
    
    cout<<"After sorting" << endl;
    
    for(int i = 0;i<=size ; i++) {
        cout<<myarray[i] <<" ";
    }
    cout<<endl;
    

    return 0;
}
