#include <stdio.h>

void display(int arr[] , int size){
    int i;
    for(i = 0 ; i< size ;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main() 
{
    int array[] = {5,3,1,9,8,2,4,7};
    
    int size = sizeof(array)/sizeof(array[0]);
    display(array , size);
    
    int i , j ,target;
    
    for(i = 1 ; i< size ; i++){
        target = array[i];
        j = i-1; // why need to check before the elements i
        
        while(j >= 0 && array[j] > target)
        {
            array[j-1] = array[j];
            j=j-1;
        }
        array[j+1] = target;
    }
    display(array , size);
    
    return 0;
    
}
