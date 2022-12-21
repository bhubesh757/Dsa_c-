#include <iostream>

using namespace std;

//counting sort algorithm

void passByValue(int x , int y) {
    int z = x;
    x=y;
    y=z;
    
}

void passByAddress(int *x , int *y) {
    int z = *x;
    *x=*y;
    *y=z;
}
// pass by reference
// here swapping is done ?

void passByRef(int &x , int &y) {
    int z = x;
    x=y;
    y=z;
}

int main()
{
    //pass by value , pass by reference , pass by address/pointer
    
    int a= 5 , b =6;
    //call the function
    cout<<"Before Swapping" <<endl <<"a: "<<a<<endl<<"b: "<<b<<endl;
    //passByValue(a, b);
    passByAddress(&a , &b);
    
    cout<<"After Swapping" <<endl <<"a: "<<a<<endl<<"b: "<<b<<endl;
    
    

    return 0;
}
