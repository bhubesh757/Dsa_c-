#include <iostream>

using namespace std;

//inside the class , its always private mention it as public to make them public
//Abstraction

class AbstractEmployee {
  virtual void askForpromotion() = 0;   
};

class Employee {
    private:
    string name;
    string company;
    int age;
    
    public:
    void setName(string  n) {
        name = n;
    }
    
    string getName() {
        return name;
    }
    
    void setCompany(string c) {
        company = c;
    }
    
    string getCompany() {
        return company;
    }
    
    void setAge(int a) {
        if(age>=18) {
        age = a;
        }
        
    } 
    int getAge() {
        return age;
    }
    
    void introduceYourself() {
        cout<<"My Name is " <<name<< endl;
        cout<<"and i work in this company " <<company<< endl;
        cout<<"My Age is " <<age<< endl;
    }
    
    //constructor; => 3 rule , no return type , same name as class name;
    Employee(string n , string c , int a) {
        name = n;
        company = c;
        age = a;
    }
    // Encapsulaiton :
    //definition // data hiding
    
};

//inheritance
class Developer : public Employee {
    public:
    string language;
    //creating a constructor;
    Developer(string n , string c , int a ,string l) : Employee(n , c , a) 
    {
    language = lang;
    }
    
    void FixBug() {
        cout<<getName() << "Fixed Bug using " << l << endl;
    }
};
//need constructor for the class



int main() {
   // Employee emp ; // variable is created
    // emp.name = "madona";
    // emp.company = "amazon";
    // emp.age = 23;
    // Employee emp = Employee("john" , "microsoft" , 26);
    // emp.introduceYourself();
    
    // // Employee emp2;
    // // emp2.name = "Guion";
    // // emp2.company = "Microsoft";
    // // emp2.age = 32;
    // Employee emp2 = Employee("Harry" , "Amazon" , 34);
    // emp2.introduceYourself();
    // emp.setAge(32);
    // cout<<"The Age of emp 1 is " <<emp.getAge()<<endl;
    Developer dev = Developer("jim" , "EY" , 28,"Python");
    dev.FixBug();
    dev.introduceYourself();
    

return 0;
}
