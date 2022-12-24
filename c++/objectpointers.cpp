#include <iostream>

using namespace std;

//oops in c++
//create a custom class , 
//pointer to the object 

class complexNumber {
    private :
    // these are the data memebers
    int real;
    float imaginary;
    
    public :
    complexNumber() {
        
    }
    complexNumber(int r , float i) {
        real = r;
        imaginary = i;
    }
    void displayData() {
        cout<<"complex number is: " <<real<<" + " <<imaginary<<"i"<<endl<<endl; 
    }
    
};

int main() {
    
    complexNumber comp1 (5,4); 
    comp1.displayData();
    return 0;
}
