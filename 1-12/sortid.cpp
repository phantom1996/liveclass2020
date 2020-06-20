// sortid
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a ,int b){


	return a>b;  // b>a (ascedig)
}



int main()
{

	int a[] = {5,3,1,2,4};

	int n = sizeof(a)/sizeof(int);

	// sort(a , a+n); //merge sort  asc order


	//des

	sort(a,a+n,compare);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}