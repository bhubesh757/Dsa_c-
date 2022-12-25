#include <iostream>
#include <string>

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
    
    int getRealPart() {
        return real;
    }
    
    float getImaginaryPart() {
        return imaginary;
    }
    
};

complexNumber add2Num(complexNumber n1 , complexNumber n2) {
    int r;
    float i;
    r = n1.getRealPart() + n2.getRealPart();
    i = n1.getImaginaryPart() + n2.getImaginaryPart();
    complexNumber temp(r,i);
    return temp;
    
}

int main() {
    
    complexNumber comp1 (5,4) , comp2(2,3) , comp3;
    comp1.displayData();
    comp2.displayData();
    cout<<"Addition of two complex numbrers " <<endl;
    comp3 = add2Num(comp1 , comp2);
    comp3.displayData();
    
    cout<<"Adding complex number using the pointers : " <<endl;
    complexNumber*ptr1;
    ptr1 = &comp3;
    ptr1->displayData();
    
    return 0;
}
