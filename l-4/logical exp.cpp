// logical exp
#include <iostream>
using namespace std;

int main()
{

	int x= 5;
	int y= 10;
	int z= 2;

	int a =  50;

	// if(x>y && ++a){
	// 	cout<<"express1";
	// }

	// if(x>y || ++a){
	// 	cout<<"express2";
	// }

	if(++a && x>y){
		cout<<"express1";
	}

	if(++a || x>z){
		cout<<"express2";
	}

	cout<<a;
	
	return 0;
}