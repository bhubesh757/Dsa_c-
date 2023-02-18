#include <iostream>
#include<bits/stdc++.h>
#include <unordered_map>
//set
#include <set>

using namespace std;





int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	set<int> s = {2 , 3 , 5 , 8 , 5 , 2} ;
	cout<<"size = " << s.size() << endl;

	s.insert(7);
	s.insert(6);

	for(auto& el: s) 
		cout<< el << " " << endl;;

	//erasing the element

	s.erase(8);
	for(auto& el : s) 
		cout<<el<< endl;
	cout<<endl;

	//upperbound and lowebound

	auto ub = s.upper_bound(2);
	auto lb = s.lower_bound(5);


	cout<< "upper bound = " << *ub << endl;
	cout<< "lowe bound = " << *lb << endl;


// insering using ht vector
	
	vector<int > num = {10 , 20 , 30 , 25};
	s.insert(num.begin() , num.end());

	for(auto& el : s) 
		cout<<el<< endl;
	cout<<endl;



	

	return 0;
}
