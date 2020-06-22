// as
#include <iostream>
#include <cstring>
using namespace std;

int main()
{

	int x;

	string s;

	cin >> x;

	// cin.ignore();

	cin.get();

	getline(cin,s);

	cout<<x<<endl;
	cout<<s;
	
	return 0;
}