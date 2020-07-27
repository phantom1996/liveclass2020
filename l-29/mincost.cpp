// mincost
#include <iostream>
#include <climits>
using namespace std;


int mincost(int cost[][10],int i,int j){
	if(i==0 && j==0){
		return cost[0][0];
	}

	if(i<0 || j<0){
		return INT_MAX;
	}
	int op1,op2;

	op1=op2=INT_MAX;

	op1 = mincost(cost,i-1,j);
	op2 = mincost(cost ,i,j-1);


	return min(op1,op2) + cost[i][j];

}

int ottomup(int cost[][10],int r,int c){

	int dp[100][100] = {0};

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i==0 && j==0){
				dp[i][j] = cost[i][j];
			}
			else if(i==0 && j>0){
				dp[i][j] = cost[i][j] + dp[i][j-1];
			}
			else if(i>0 && j==0){
				dp[i][j] = cost[i][j] + dp[i-1][j];
			}
			else{
				dp[i][j] = cost[i][j] + min(dp[i-1][j] , dp[i][j-1]);
			}
		}
	}

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

	return dp[r-1][c-1];


}



int main()
{


	int cost[][10]={

		{1,2,5,1},
		{8,3,6,2},
		{0,1,3,3},
		{4,1,7,4}
	};


	int i=4;
	int j=4;


	//cout<<mincost(cost,i-1,j-1);
	cout<<ottomup(cost,4,4);
	return 0;
}