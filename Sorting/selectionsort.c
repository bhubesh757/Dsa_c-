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
    int array[] = {2,6,1,8,3,11,5};
    
    int size = sizeof(array)/sizeof(array[0]);
    display(array , size);
    
    int i , j, minpos ,temp;
    
    for(i = 0 ; i< size - 1 ;  i++)
    {
        minpos = i;
        
        for (j = i+1 ; j < size ;j++) {
            if(array[j] < array[minpos])
            {
                minpos = j;
            }
        }
        
        //swap the values
        temp = array[minpos];
        array[minpos] = array[i] ;
         array[i] = temp;
    }
    
    display(array , size);
    return 0;
    
    
    
    
}
