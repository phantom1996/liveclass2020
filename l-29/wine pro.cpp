// wine pro
#include <iostream>
using namespace std;

int Max_pro(int a[],int s,int e,int day){

	if(s>e){
		return 0;
	}

	int startpick = day*a[s] + Max_pro(a,s+1,e,day+1);

	int endpick =  day* a[e] + Max_pro(a,s,e-1,day+1);

	return max(startpick,endpick);

}

int topdown(int a[],int i,int j,int day ,int dp[][100]){
	if(i>j){
		dp[i][j] = 0;
		return dp[i][j];
	}

	if(dp[i][j]!=0){
		return dp[i][j];
	}

 	int startpick = day*a[i] + topdown(a,i+1,j,day+1,dp);
 	int endpick =  day*a[j] + topdown(a,i,j-1,day+1,dp);

 	dp[i][j] = max(startpick,endpick);

 	return dp[i][j];
}

int ottomup(int a[],int n){

	int dp[100][100]  = {0};
	

	int day = n;


	for(int i=0;i<n;i++){
		dp[i][i] = a[i]*day;
	}

	day--;

	for(int len =2;len<=n;len++){

		int i = 0;
		int maxi = n-len;

		while(i<=maxi){

			int j = i+len-1;

			int op1 = a[i]*day + dp[i+1][j];

			int op2 = a[j]*day + dp[i][j-1];


			dp[i][j] = max(op1,op2);

			i++;
		}

		day--;

	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;
	return dp[0][n-1];

}



int main()
{
	int dp[100][100] = {0};

	int a[]={2,3,5,1,4};

	int n = sizeof(a)/sizeof(int);


	// cout<<Max_pro(a,0,n-1,1)<<endl;
	// cout<<topdown(a,0,n-1,1,dp)<<endl;
	cout<<ottomup(a,n)<<endl;
	return 0;
}