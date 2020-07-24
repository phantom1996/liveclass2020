// currencyexchange
#include <iostream>
#include <climits>
using namespace std;


int currencyexchange(int coins[],int n,int amount){


	if(amount == 0){
		return 0;
	}



	int ans = INT_MAX;

	for(int i=0;i<n;i++){

		//cois[0];

		if(amount>=coins[i]){

			//ta coi de sakta hu
			int rem = 1 +  currencyexchange(coins,n,amount-coins[i]);
 
			ans = min(rem,ans);

		}


	}
	return ans;
}
int topdow(int coins[],int n,int amount,int dp[]){


	if(amount == 0){
		dp[amount] =  0;
		return 0;
	}

	if(dp[amount]!=-1){

		return dp[amount];
	}


	int ans = INT_MAX;

	for(int i=0;i<n;i++){

		//cois[0];

		if(amount>=coins[i]){

			//ta coi de sakta hu
			int rem = 1 +  topdow(coins,n,amount-coins[i],dp);
 
			ans = min(rem,ans);

		}


	}

	dp[amount] = ans; 
	return ans;
}

int ottomup(int coins[],int n,int amount){


	int dp[1000];

	for(int i=0;i<1000;i++){
		dp[i] = INT_MAX;
	}

	dp[0] = 0;

	for(int rupay = 1; rupay<=amount ; rupay++){

		for(int i=0;i<n;i++){

			if(rupay >= coins[i]){
				dp[rupay] = min(dp[rupay] , dp[rupay-coins[i]] +1 );
			}

		}

	}

	for(int i=0;i<=amount;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;

	return dp[amount];


} 



int main()
{

	int coins [] = {1,7,10};

	int n = sizeof(coins)/sizeof(int);

	int amount;

	cin>>amount;

	int dp[10000];
	for(int i=0;i<10000;i++){
		dp[i]=-1;
	}


	//cout<<currencyexchange(coins,n,amount)<<endl;
	cout<<topdow(coins,n,amount,dp)<<endl;
	cout<<ottomup(coins,n,amount);
	return 0;
}