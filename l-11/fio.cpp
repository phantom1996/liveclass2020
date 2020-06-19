// fio
#include <iostream>
using namespace std;


int fio(int n){
	//ase case

	if(n==0 || n==1){
		return n;
	}


	//recursive case

	//assumption

	int chota1 =  fio(n-1);

	int chota2 =  fio(n-2);



	//ans cal
	int ans = chota1 + chota2;


	return ans;


}





int main()
{
	int n;

	cin >> n;


	cout<<fio(n);
	
	return 0;
}