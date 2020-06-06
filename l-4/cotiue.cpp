// cotiue
#include <iostream>
using namespace std;

int main()
{

	// for(int i=1;i<=5;i++){

	// 	if(i==2){
	// 		continue;
	// 	}
	// 	cout<<i<<" ";
	// }

	int i = 1;

	while(i<=5){
		if(i==2){
			cout<<i<<" ";
			continue;
			
		}
		cout<<i<<" ";
		i++;
	}
	
	return 0;
}