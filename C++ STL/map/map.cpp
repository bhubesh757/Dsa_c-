#include <iostream>
#include<bits/stdc++.h>
#include <unordered_map>
#include <map>
using namespace std;





int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//initializing the map
	//mapping the value and the number
// 	map<char , int> mp = {
// 		{'H' , 7 },
// 		{'B' , 8 },
// 		{'E' , 6} 
// 	};

// 	//inserting into the maps
// 	mp['B'] = 10;
// 	// cout<<mp['B'] << endl;
// 	pair<char , int> p('k' , 9);
// 	mp.insert(p);
// 	// cout<< mp['H'] <<endl;
// 	// cout<<mp['B'] << endl;
// 	// cout<<mp['k'] << endl;

// 	cout<< p.first <<endl;
// 	//erasing the element from th map
// 	mp.erase(p.first);
// 	// cout<< mp['k'] <<endl;

// 	//checking whether the element is present in the set if present take some action
// 	//looping through out the map function using its function 
// 	for(auto it = mp.begin(); it != mp.end(); ++it ) {
// 	cout<<it->first <<endl;
// 	cout<<it->second << endl;
// }

//example
	string test = "hello world my name is bhubesh! woww";

	map<char , int > mp;

	for(int i = 0 ; i < test.size() ; i++) {
		//it separate the letters
		char l = test[i];
		cout<< l << endl;

//what it does is it counts the letter int the string and returns the no of letters presentn and it increemenst

		if (mp.find(l) == mp.end() ) {
			mp[l] = 0;
		}

		mp[l]++;
		cout<< mp[l] << " " <<l << endl;
	}
	for(auto it = mp.begin() ; it != mp.end() ; it++) {
		cout<< it->first << " " << it ->second <<endl;
	}

	return 0;
}
