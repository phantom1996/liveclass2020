// r1fact
#include <iostream>
using namespace std;


int factorial(int n){

	//ase case

	if(n  == 0){
		return 1;
	} 

	//recursive case

	//assumption

	int chotekaansptakar = factorial(n-1);


	//ans

	int ans = n*chotekaansptakar;

	return ans;


}

int main()
{
	int n;

	cin >> n;

	cout<<factorial(n);
	
	return 0;
}