// referce 
#include <iostream>
using namespace std;

int main()
{
	int n=5;
	int &m = n;
	int &p = m;

	// cout<<n << " "<<m;

	n++;
	m++;
	p++;

 cout<<n << " "<<m<<" "<<p;


// 5,6
// 6,5
// 5,5
// 6,6






	
	return 0;
}