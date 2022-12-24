#include <iostream>

using namespace std;

//pointers in cpp

int main() {
    
  //Dynamic memory allocation
  int size ;
  int*ptr;
  
  
  cout<<"Enter number values which you want to store in the list"<<endl;
  cin>>size;
  
  //why new keyword
  ptr = new int[size]; //till the size which the user entered will be  stored by while loop and get stored in the ptr
  cout<<"enter the numbers wants store in the array / list "<<endl;
  for(int i =0 ; i<size ; i++) 
  {
      cin >>ptr[i] ;
  }
  
  
  cout<<"values are in the list or array:"<<endl;
  for(int i =0 ; i<size ; i++) 
  {
     cout<<ptr[i] << endl;
  }

    
  return 0;  
    
    
}
