// dma
#include <iostream>
using namespace std;

int main()
{


	int *p = new int;

	// *p = 5;

	cout<<*p<<" "<<p;

	delete p;
	
	return 0;
}