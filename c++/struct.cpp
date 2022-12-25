#include <iostream>

using namespace std;

//structures ?
// strcut keyword is used to create the own datatypes

struct Person {
    char name[50];
    int age;
    double salary;
};
int main() {
    
    Person p;
    cout<<"Enter the person details " <<endl<<"Enter person Name : "<<endl;
    cin.getline(p.name,100); //why getline
    cout<<"Enter Age" <<endl;
    cin>>p.age;
     cout<<"Enter Salary" <<endl;
    cin>>p.salary;
    
    //ouptut
    cout<<endl<<"Person Details are as follows: "<<endl;
    cout<<"Person name " <<p.name;
    cout<<"Person age " <<p.age;
    cout<<"Person salary " <<p.salary;
    return 0;
}
