
#include <iostream>

using namespace std;
//creating a class , its a blueprint for the datatype;
//constructor function


class Book {
    public :
        string title;
        string author;
        int pages;
        //creating a constructor;
        Book(string aTitle , string aAuthor , int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};


int main() 
{
   //pointers
  /*/ int age = 20;
   int *pAge = &age;
   double gpa = 8.5;
   double *pGpa = &gpa;
   string name = "Bhubesh";
   string *pName = &name;   //stores the memory address of the name; /*/
   
   // * denoted as pointers;
   
   //creating classes and objects
   Book book1("Adventure" , "canon" , 546); // just creating an object from the class;
  /*/ book1.title = "Advnenture";
   book1.author = "Canon";
   book1.pages = 433;
   
   cout <<book1.title;
   cout << book1.pages;/*/;
   //cout <<book1.title;
   
   //object functions;
   
   
   return 0;
}
