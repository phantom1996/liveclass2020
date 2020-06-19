// arraysum
#include <iostream>
using namespace std;

int sum(int a[],int i,int n){

	//ase condition

	if(i == n){
		return 0;
	}


	//recursive case;

	int chotaans =  sum(a,i+1,n);


	//ans

	int ans = a[i] + chotaans;

	return ans;

}



int main()
{

	int n;

	int a[1000];

	cin >> n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}


	cout<<sum(a,0,n);
	
	return 0;
}