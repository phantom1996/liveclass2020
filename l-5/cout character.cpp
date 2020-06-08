// cout character
#include <iostream>
using namespace std;

int main()
{

	char c;
	//cin >> c;
	c=cin.get();
	int cnt = 0;

	while(c!= '$'){
		cnt++;
		//cin>>c;
		c=cin.get();
	}

	cout<<cnt;
	
	return 0;
}