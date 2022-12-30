#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void pair() {
    pair< int , int > p = {3 ,2};
    cout<<p.first<< " " << p.second;
    pair<int , pair<int , int >> p = {2, {4,8}};
    cout<<"Printing the nested pair " p.second.second <<" " <<p.second.first <<endl;
    //creating array using the pair
    pair<int , int > arr[] = {{4,5} ,{3,2} ,{7,9} };
    cout<<arr[2].second;
    cout<<arr[3].first;
}

int main() {
    pair();
    return 0;
}
