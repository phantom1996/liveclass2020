// ter
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >>n;

	//()?statement1 : statement2;

	(n%2==0)?cout<<"Even":cout<<"Odd";

	(n%2==1)?cout<<"Odd":cout<<"Even";
	
	return 0;
}