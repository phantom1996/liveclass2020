// primefu
#include <iostream>
using namespace std;

bool primechecker(int n){

	if(n==1){
		return false;
	}

	for(int i = 2; i<=n-1 ;i++){
		if(n%i==0){
			return false;
		}
	}

	return true;
}


int main()
{
	
	int n;
	cin>>n;

	  cout <<boolalpha <<primechecker(n);
	  // if(a==true){
	  // 	cout<<"p";
	  // }
	  // else{
	  // 	cout<<"np";
	  // }

	return 0;
}