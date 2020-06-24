 // nstairs
#include <iostream>
using namespace std;

int  nstairs(int  n){

	if(n == 0){
		return 1;
	}


	if( n<0){
		return 0;
	}

	int ans1  =  nstairs(n-1);

	int ans2  = nstairs(n-2);

	int ans3  = nstairs(n-3);

	return   ans1 + ans2 + ans3;



}


int main()
{

	int  n;
	cin >>  n;

	int ans  =  nstairs(n);
	
	cout<<ans;	
	return 0;
}