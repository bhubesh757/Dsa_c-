
#include <iostream>

using namespace std;

//creating a function

void sayHi (string name , int age ) {
    cout << "Hello " << name << "your age is " << age << endl;  ;
}

// return statement;
double cube (double num) {
    //return num * num * num;
    //
    double result = num * num *num;
    return result;
}

int main() 
{
    //Using Arrays in c++
    int arr[] = {1,2,3,4,5,6};
    cout << arr[1] <<endl;
    
    //functions -> collection of code which perform some task with the code , its a container and can be reused
    // calling the funtion from the sayhi function
    sayHi("karan" , 20);
    
    
    double answer = cube(3.0);
    cout << answer << endl;
    
    return 0;
    
}
