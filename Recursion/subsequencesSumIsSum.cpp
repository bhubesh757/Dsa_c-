// using boolean and returning it truea or not;
// the technique is to print only the one answer and make the ouput as in single subsequences 
// if  

#include<iostream>
#include<bits/stdc++.h>
#include <vector>

using namespace std;


bool  f(int ind , std::vector<int> &ds  , int s , int sum , int arr[] , int n )  {

if(ind == n) {

	if(s == sum) {
	for(auto it : ds) cout<< it << " ";
		cout<< endl;
	return true;
}
else{
return false;
}

}


ds.push_back(arr[ind]);
s -= arr[ind];
if (f(ind+1 , ds , s , sum , arr, n) == true){
	return true;
}

s-= arr[ind];
ds.pop_back();

if( f(ind+1 , ds , s , sum , arr, n) == true ) return true;
return false;

}


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int arr[]= {1,2,1} ;
	int n = 3;
	int sum = 2;
	std::vector<int> ds;

	f(0, ds , 0 , sum , arr,n);

	return 0;


}

------------------------------
#include<iostream>
#include<bits/stdc++.h>
#include <vector>

using namespace std;

//count the subsequences sum of k;;

int  f(int ind   , int s , int sum , int arr[] , int n )  {

if(ind == n) {

	if(s == sum) {
	return 1;
}
else{
return 0;
}

}


s -= arr[ind];
int l = f(ind+1, s , sum , arr, n);

s-= arr[ind];

int r =  f(ind+1  , s , sum , arr, n);

return l + r;

}


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int arr[]= {1,2,1} ;
	int n = 3;
	int sum = 2;
	cout<< f(0 , 0 , sum , arr,n);

	return 0;


}
