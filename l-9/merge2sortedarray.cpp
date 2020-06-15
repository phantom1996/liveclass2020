// merge2sortedarray
#include <iostream>
using namespace std;

int main()
{
	int x[100];

	int y[100];


	int m;
	int n;

	cin>>m>>n;

	for(int i=0;i<m;i++){
		cin>>x[i];
	}
	for(int i=0;i<n;i++){
		cin>>y[i];
	}

	//merge

	int i=m-1;
	int j=n-1;

	int k=m+n-1;

//1000000
	while(i>=0 && j>=0){
		if(x[i]<y[j]){
			x[k]=y[j];
			k--;
			j--;
		}
		else{
			x[k]=x[i];
			k--;
			i--;
		}
	}

	// y array finish

	//no need already sorted


	if(j>=0){

		while(j>=0){
			x[k]=y[j];
			j--;
			k--;
		}

	}


for(int i=0;i<m+n;i++){
	cout<<x[i]<<" ";
}




	
	return 0;
}