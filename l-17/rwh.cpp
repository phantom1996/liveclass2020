// rwh
#include <iostream>
using namespace std;

int rwh(int a[],int n){
	int larray[n];
	int rarray[n];

	//larray

	larray[0]=0;
	int left_max = a[0];

	for(int i=1;i<n;i++){
		larray[i] = left_max;
		left_max = max(left_max,a[i]);
	}
	//rarray

	rarray[n-1]=0;
	int right_max = a[n-1];


	for(int i=n-2;i>=0;i--){
		//rarray[i] = right_max;
		larray[i]  = min(larray[i] ,right_max);
		right_max =max(right_max,a[i]);
	}

	int finalans = 0;

	for(int i=0;i<n;i++){
		if(min(larray[i],rarray[i]) - a[i] > 0){
			finalans += (min(larray[i],rarray[i]) - a[i]);
		}
	}

	return finalans;


}




int main()
{
	int n;
	cin >>n;

	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int ans = rwh(a,n);
	cout<<ans;
	return 0;
}