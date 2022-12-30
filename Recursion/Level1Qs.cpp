Level 0

#include <iostream>
using namespace std;

//first n numbers
int sum (int n) {
    if( n == 0) 
    return 0;

    return n+sum(n-1);
}


int main() {
    int n = 3;
    //calling a funciton
   cout<<sum(n);
    return 0;
}

// funcitonal Recursion
2 )Reverse an array
 
#include <iostream>

using namespace std;

//swapping an array using recursion

void f (int i , int arr[] , int n) {
    if(i>=n/2) 
    return ;
    swap(arr[i] , arr[n-i-1]);
    f(i+1 , arr , n);
    
}

int main() {
   int n ;
   cin>>n;
   int arr[n];
   for(int i = 0 ; i<n;i++) {
       cin>> arr[i];
   }
   
   f(0, arr , n);
   
   for(int i = 0 ; i <n ;i++) {
       cout<<arr[i] <<" " ;
   }
   return 0;
}

3) find the given string is pallindrome or not using the recursion function;
#include <iostream>
#include <string>
using namespace std;

//sqpping an array using recursion

bool f(int i , string &s) {
    if( i >= s.size() / 2) 
    return true;
    if(s[i] != s[s.size() - i - 1])
    return false;
    f(i+1 , s);
}


int main() {
    string s = "malayalam";
    cout<< f(0,s);
    return 0;
}



