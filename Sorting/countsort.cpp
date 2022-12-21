#include <iostream>

using namespace std;

//counting sort algorithm

void countingSort(int input_arr[] , int s , int r) {
    // create two arrays which create and store the the sum of the previous array
    int output_arr[s];
    int count_arr[r];
    
    for(int i = 0; i<r ; i++) {
        //initialize the array to 0;
        count_arr[i] = 0;
    }
    
    for(int i =0; i<=s ;i++) {
        // need to increement the and store the counted values in the output aray
        count_arr[input_arr[i]]++;
    }
    
    for(int i = 1; i<=r;i++) {
        count_arr[i] = count_arr[i] + count_arr[i-1];
    }
    
    for(int i = 0; i<s ;i++) {
        output_arr[--count_arr[input_arr[i]]] = input_arr[i];
    }
    
   for(int i =0; i <0; i++) {
       input_arr[i] = output_arr[i];
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
