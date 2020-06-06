// sr
#include <iostream>
using namespace std;

int main()
{

	int n;

	cin >> n;

	int sr = 1;

	while(sr * sr <= n){
		sr = sr + 1;
		//sr+=1; comp Assig op
	}

	cout<< sr-1;
	
	return 0;
}