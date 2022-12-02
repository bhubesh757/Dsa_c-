#include <iostream>

using namespace std;

void mergeSort(int[] , int , int);
void merge(int[] , int , int);

void printArray(int arr[] , int size) 
{
    int i;
    for(i = 0 ; i<size ; i++) {
        count << arr[i] <<" ";
    }
    
    cout<< endl;
}

//it contains the array to be sorted
int main() {
    
    int array[] = {5,4,8,9,1,2,4,5,6,7};
    int i;
    
    int size = sizeof(array)/sizeof(array[0]);
    printArray(arraay , size);
    
    mergeSort(array , 0 , size -1);
    printArray(array , size);
    
    
}
