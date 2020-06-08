// scope1
#include <iostream>
using namespace std;

int glo=10;
int x=10;

int main()
{
	int x=5;
	//cout<<x;
	int a=2;
	while(a<=2){
		int x=5;
		cout<<x;
		a++;
	}

	//cout<<x<<endl;

	//cout<<::x;
	return 0;
}