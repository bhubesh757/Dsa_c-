#include <iostream>
#include <string>

using namespace std;

//structures ?
// 1) strcut keyword is used to create the own datatypes
// 2) pointers to structures

struct Person {
    string name;
    int age;
    double salary;
};

int main() {
    
    Person p[2];
    cout<<"Enter the name of the person an other details"<< endl;
    
    for(int i =0 ; i<2 ; i++) {
        cin>>p[i].name;
        cin>>p[i].age;
        cin>>p[i].salary;
    }
    
    cout<<"Details of the  persons" << endl;
    
    for(int i = 0 ; i< 2; i++) {
        cout<<"names , age and salry of the person" << endl;
        cout<<"Person name is "<<p[i].name << endl;
        cout<<"Person age is "<<p[i].age << endl;
        cout<<"Person salary is " <<p[i].salary << endl;
    }
    
    
    return 0;
}


// program 2


#include <iostream>
#include <string>

using namespace std;
//pointer to structure
// create a variable struct type ad create a pointer and point to it and use the pointer to take the input and input

struct Person {
    string name;
    int age;
    double salary;
};

int main() {
    Person p;
    
    cout<<"Enter the name of the person an other details"<< endl;
    
        // cin>>p.name;
        // cin>>p.age;
        // cin>>p.salary;
        
        // cout<<"Details of the persons" << endl;
        // cout<<"Name of the person " <<p.name<<endl;
        // cout<<"age of the person " <<p.age<<endl;
        // cout<<"salary of the person " <<p.salary<<endl;
        
        Person*ptr = &p;
        cin>>ptr->name;
        cin>>ptr->age;
        cin>>ptr->salary;
        
        cout<<"Details of the persons" << endl;
        cout<<"Name of the person " <<ptr->name<<endl;
        cout<<"age of the person " <<ptr->age<<endl;
        cout<<"salary of the person " <<ptr->salary<<endl;
    
    
    return 0;
}
