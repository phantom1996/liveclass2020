// reverse
#include <iostream>
using namespace std;

int main()
{

	int k;
	cin >>k;

	while(k>0){
		int last_digit=k%10;
		cout<<last_digit;
		k/=10;
	}


	
	return 0;
}