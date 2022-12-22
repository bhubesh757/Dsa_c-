#include <iostream>

using namespace std;

//Radix sort algorithm
// while creating a function need to mention the array but while calling the function no need of using [] in the call function it used the call 
//call by address

// getmax function

int getMax (int arr[] , int size){
    int  max = arr[0] ;
     for(int i = 1 ; i< size ; i++) {
         if(arr[i] > max) {
             max = arr[i]; // storing the arr[i] in the max value;
         }
     }
     return max;
}

void countingSort(int inputarr[] , int size , int pos) {
    // create two arrays which create and store the the sum of the previous array
    int output[size];
    int count[10] = {0};
    
    for(int i = 0; i<size ; i++) {
        count[inputarr[i] /pos % 10]++;
    }
    // output array which adds the total numbers by adding one array another
    
    for(int i =1; i<10 ;i++) {
       count[i] = count[i] + count[i-1];
    }
    
    for(int i = size -1; i >= 0; i--) {
        output[count[(inputarr[i] / pos) % 10 ]] = inputarr[i]; // what it does is from the array a , it starts from the backward ,  and decreases by i--;
    }
    
    for(int i = 0 ; i < size ; i++) {
        inputarr[i] = output[i];
    }
    
}


void radixSort(int arr[] , int size ) {
    //getmax
    int max = getMax( arr ,  size); // here size refrred to be n in algorithm
    //why this for for loop  need to find  , 1s , 10s , 100s
    for(int pos = 1; max/pos >0 ; pos*=10) {
        //call the countsort here
        countingSort(arr , size , pos);
    }
}

// counting sort algorithm


int main()
{
    int size;
    //taking input from the user;
    cout<<"Enter size of an array";
    cin >> size;
    int arr[size]; //taking the input from the user and storing it in the array
    
    cout<<"Enter" << size <<"numbers in any order from the range of 0 - 9"<< endl;
    
    for(int i = 0 ; i<=size ; i++) {
        cin>>arr[i];
        
    }
    
    cout<<"Before sorting" << endl;
    
    for(int i = 0;i<=size ; i++) {
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    
   //Radix sort funciton is called
   radixSort(arr , size);
    
    cout<<"After sorting" << endl;
    
    for(int i = 0;i<=size ; i++) {
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    

    return 0;
}
