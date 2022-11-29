#include <iostream>
// getter and setter functions


using namespace std;

class Rectangle {
    
    public:
   int length , breadth;
   
   //setter;
   
   public:
   void setlength(int len) {
       length = len;
   }
   
   public:
   void setbreadth(int bre) {
       breadth = bre;
   }
   
   //getter
   int getlength() {
       return length;
   }
   
   int getbreadth() {
       return breadth;
   }
   
   int area () {
       return length*breadth;
   }
   
};

int main() {
   // struct is a structure
   Rectangle rectObj;
   //rectObj.length = 10;
   //rectObj.breadth = 20;
   
   
   //getter setting the function
   rectObj.setlength(45);
   rectObj.setbreadth(65);
   
   
   
   cout <<"the length of the rectangle is " <<rectObj.getlength()<< endl;
   cout <<"The breadth of the rectangle is" <<rectObj.getbreadth()<<endl;
   cout << "The Area of the Rectangle is :" << rectObj.area() << endl;
   

    
}
