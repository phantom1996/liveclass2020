// pats

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for(int row=1;row<=n;row++){
		// 1loop

		for(int col=1;col<=row;col++){
			cout<<"*";
		}
		cout<<" ";

		//2d loop
		for(int  col=1; col<= n-row+1; col++){
			cout<<"*";
		}
		cout<<" ";
		//3 loop
		for(int  col=1; col<= n-row+1; col++){
			cout<<"*";
		}
		cout<<" ";
		//4 loop
		for(int col=1;col<=row;col++){
			cout<<"*";
		}		

		cout<<endl;
	}

	
	return 0;
}