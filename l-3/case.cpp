// case
#include <iostream>
using namespace std;

int main()
{

	char c ;
	cin >>c;

	int x = c;

	if(x >= 'A' && x <= 'Z'){
		cout<<"char is upper";
	}
	else{
		cout <<"Lower";
	}

	// //int x = c; //implicit

	// int x = int(c);  //explicit

	// int y = 2000;

	// char d = 2000; 
	
	// cout<<d;

	
	return 0;
}