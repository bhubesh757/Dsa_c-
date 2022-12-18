# include <iostream>

using namespace std;

void selectionSort(int arr[])
{
    for(int i=0; i<4 ; i++) {
        int min = i;
        for(int j = j+1 ; j<5 ;j++) {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        if(min != i) {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
        
    }
}


int main () {
    int myarr[5];
    cout << "enter the intergers : " ;
    for(int i = 0 ; i<5 ;i++) {
        cin>>myarr[i] ;
        
    }
    
 
    
    cout << "Unsorted Array " ;
    for(int i = 0 ; i<5 ;i++) {
        cout<<myarr[i] << " ";
    }
    
    cout << endl;
    
       // selection sort algorithm
    
    selectionSort(myarr);
    
       cout << "sorted Array " ;
    for(int i = 0 ; i<5 ;i++) {
        cout<<myarr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
