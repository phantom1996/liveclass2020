// array poityer
#include <iostream>
using namespace std;

int main()
{

	int a[5] = {1,2,3,4,5};


for(int i=0;i<5;i++){
	cout<<a[i]<<" ";
}


cout <<endl;

for(int i=0;i<5;i++){
	cout<<*(a+i)<<" ";
}

cout<<*(a+20);
	
	return 0;
}