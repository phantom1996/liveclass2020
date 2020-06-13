// myp
// p
#include <iostream>
using namespace std;

void fuc(int n,int m){
	int temp = n;
	n = m;
	m = temp;

	return; 
}

int main()
{

	int n = 5;
	int m = 6;

	cout<<n<<" "<<m<<endl;

	fuc(n,m);
	cout<<n<<" "<<m;
	
	return 0;
}