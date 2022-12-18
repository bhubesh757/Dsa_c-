#include <iostream>

using namespace std;

// binary search
//recursive approach

int binarySearch(int array[] , int left , int right  , int item) {
    
    if(right >= left ) {
        
        //finding the mid value first
        int mid = (left + right) /2 ;
        
        // reject the left side if the mid value is greater
        if(array[mid] == item )
            return mid+1;
        if(array[mid] < item) 
            return binarySearch(array , left , mid+1 , item);
        else
            return binarySearch(array , left , mid-1 , item);
        
    }
    else 
    return -1;
    
}

int main() {

    int array[10] = {5,9,17,23,25,45,59,63,71,89};
    
    int item = 45;
    int position = binarySearch(array , 0 , 10 ,item);
    if(position == -1) 
        cout<< "Not found" << endl;
    else 
        cout << "We Found the Item " << item <<  " at position " << position;
  
}
