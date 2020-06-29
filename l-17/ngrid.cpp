// ngrid
#include <iostream>
using namespace std;

int ngrid(int n,int m){


	//ase 

	if(n== 0 && m== 0){
		return 1;
	}

	if(n<0 || m<0){
		return 0;
	}

	int ans = ngrid(n-1,m) + ngrid(n,m-1);

	return ans;


}





int main()
{

	int n ,m;

	cin >> n>>m;


	int ans = ngrid(n-1,m-1);

	cout<<ans;
	
	return 0;
}