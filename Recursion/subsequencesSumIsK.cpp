#include<iostream>
#include <bits/stdc++.h>
using namespace std;


void printS(int ind , vector<int> &ds , int s , int sum , int arr[] , int n)  {
	if(ind == n ){
		if( s == sum){
			for(auto it : ds)
			cout<<it <<" " ;
		cout<<endl;
		}
	}
	return;
}

//take action
ds.push_back(arr[]);
s += arr[];
printS(ind+1 , ds , s,sum,arr,n);
s -= arr[];
ds.pop_back();
//not take action
printS(ind+1,ds,s,sum,arr,n);


int main()
{
	int arr[] = {1,2.1};
	int n = 3;
	int sum = 2;
	vector<int> ds;
	//calling the function
	printS(0 , ds, 0, sum , arr,n);
	return 0;

}
