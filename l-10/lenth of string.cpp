// lenth of string


#include <iostream>
#include <string>
using namespace std;

int main()
{

	string s;

	cin >>s;

	int len = 0;

	while(s[len]!='\0'){
		len++;
	}

	cout<<len;
	
	return 0;
}