// factorial
#include <iostream>
using namespace std;

int factorial(int n){
	int fact = 1;

	for(int i = n ;i>=1 ;i--){
		fact = fact * i;
	}

	return fact;
}

int ncr(int n ,int r){
	// int  nf = factorial(n);
	// int  nrf = factorial(n-r);
	// int rf = factorial(r);

	// int ans = factorial(n)/(factorial(n-r)*factorial(r))            //nf/(nrf * rf);

	// return ans;

	return factorial(n)/(factorial(n-r)*factorial(r)) ;
}

int main()
{
	int n,r;
	cin>>n>>r;

	cout<<ncr(n,r);
	
	return 0;
}