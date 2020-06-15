// p2

#include <iostream>
using namespace std;

int main()
{
	int x = 5;

	int *p;

	p = &x;

	// cout<<x<<" "<<*p;
	
	cout<<p<<" "<<*p<<endl;
	// *p = 10;


	// cout<<*p ;

	// cout <<x;

	int y = 15;

	p = &y;

	cout<<p<<" "<<*p;




	return 0;
}