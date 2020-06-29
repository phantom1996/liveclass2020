// dmaarray
#include <iostream>
using namespace std;

int main()
{
	int x;
	cin>>x;
	
	int *p = new int[x];

	for(int i=0;i<x;i++){
		//p[i]= i;

		cin>>p[i];

		//*(p+i) = i;

	}

	for(int i=0;i<x;i++){
		cout<<*(p+i)<<" ";
	}


	//delete

	delete []p;





	return 0;
}