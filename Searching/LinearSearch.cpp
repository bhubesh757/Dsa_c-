#include<iostream> 
using namespace std;

//LinearSearch 

void LinearSearch(int a[] , int n  ) {
	int temp = 0;

	for(int i = 0 ; i < 5 ;i++) {
		if(a[i] == n) {
			cout<<"element found"<<i<< endl;
			temp = -1;
		}

	}

	if(temp == 0) {
			cout<<"Element Not found" <<  endl;
		}
}

int main () {
	int a[5] = {1 , 4 ,6 ,7 ,8};
	cout<<"Please Enter the Element to Search"<<endl;

	int num;
	cin>>num;

	LinearSearch(a , num);

	return 0;
}
