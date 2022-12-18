#include <iostream>

using namespace std;

//creating a mergesort algorithm

//creating the merge function

void merge(int arr[] , int l , int r , int m) 
{
    int i = l;
    int j = m+1;
    int k = l;
    
    int temp[5];
    
    //creating a while loop
    
    while (i <= m && j <= r) 
    {
        if(arr[i] <= arr[j]) 
        {
            temp[k] = arr[i] ;
            i++;
            k++;
        }
        else 
        {
            temp[k] = arr[j] ;
            j++;
            k++;
            
        }
    }
    
    if(i > m) 
    {
        while(j <= r) {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    else 
    {
        {
        while(i <= m) {
            temp[k] = arr[i];
            i++;
            k++;
        }
    }
    }
    
    for(int s=1; s<5;s++ ) {
        arr[s] = temp[s];
    }
}



void mergeSort(int arr[] , int l , int r ) {
    
    if(l<r) {
        int m = (l+r) / 2;
        
        mergeSort(arr , l , m);
        mergeSort(arr , m+1 , r);
        merge(arr , l,m,r);
        
    }
    
}




int main () 
{
    //inr arr[5] = {4,6,1,2,7};
    //creating the array
    cout<<"Enter 5 elements in the array :"<<endl; 
    int myarr[5];
    for(int i =0; i<5 ; i++) 
    {
        cin>>myarr[i];
    }
    
    cout <<"Before Merge Sort" << endl;
    for(int i =0; i<5 ; i++) 
    {
        cout<<myarr[i] <<" ";
    }
    
    //MergeSort algorithm
    mergeSort(myarr , 0,4);
    
     cout<<endl <<"After Merge Sort" << endl;
    for(int i =0; i<5 ; i++) 
    {
        cout<<myarr[i] <<" ";
    }
    
    return 0;
}
