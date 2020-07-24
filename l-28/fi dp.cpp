// fi dp
// fio
#include <iostream>
using namespace std;

int fio(int n){
	//ase case

	if(n==0 || n==1){
		return n;
	}
	int chota1 =  fio(n-1);

	int chota2 =  fio(n-2);

	int ans = chota1 + chota2;

	return ans;
}

int fiotopdown(int n,int dp[]){

	if(n==0 || n==1){

		dp[n] = n ; 

		return dp[n];
	}

	if(dp[n]!=-1){

		return dp[n];
	}

	int ans = fiotopdown(n-1,dp) + fiotopdown(n-2,dp);

	//save

	dp[n] = ans;

	return dp[n];


}

int bottomup(int n){
	int dp[1000];

	//initialize

	dp[0] = 0;
	dp[1] = 1;


	for(int i=2;i<=n;i++){
		dp[i] = dp[i-1] + dp[i-2];
	}


	return dp[n];
}


int main()
{
	int n;

	int dp[100];
	for(int i=0;i<n;i++){
		dp[i]=-1;
	}

	cin >> n;


	cout<<fiotopdown(n,dp)<<endl;
	cout<<bottomup(n);
	
	return 0;
}