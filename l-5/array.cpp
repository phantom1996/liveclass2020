// array
#include <iostream>
using namespace std;

int main()
{

	//syntax

	int a[5];
	// cin>>a[0];
	// cin>>a[1];
	// cin>>a[2];
	// cin>>a[3];
	// cin>>a[4];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}

	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}