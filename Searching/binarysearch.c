//binary search

#include<stdio.h>

int main() {
  int array[] = {10,30,48,65,87,23};
  int i ,n , val , flag = 0;
  
  n = sizeof(array)/sizeof(array[0]);
  
  printf("enter the value to be searched");
  scanf("%d" , &val);
  
  for(int i=0;i<n;i++) {
      if(array[i] == val) {
          flag = 1;
          break;
      }
  }
  
  if(flag == 1 ) 
  printf("The value %d is found at the %d position " , val ,(i+1));
  else
  printf("the value not found at the array");
}
