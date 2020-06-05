// max of three

#include <iostream>
using namespace std;

int main()
{

	int x;
	int y;
	int z;

	cout<<"Enter the value of X"<<endl ;
	cin >>x;
	cout<<"Enter the value of Y"<<endl ;
	cin >>y;
	cout<<"Enter the value of Z"<<endl ;
	cin >>z;

	if(x>y && x>z){
		cout<<"X is greater ";
		cout<<x;
	}
	else if(y>x && y>z){
		cout<<"Y is greater ";		
		cout<<y;
	}
	else{
		cout<<" is greater ";
		cout<<z;
	}






	
	return 0;
}