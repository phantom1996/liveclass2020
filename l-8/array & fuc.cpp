// array & fuc
#include <iostream>
using namespace std;

// void arrayprint(int a[],int n){
// 	for(int i=0;i<n;i++){
// 		cout<<a[i]<<" ";
// 	}
// 	return ;
// }

void updatearray(int a[],int n){
	for(int i=0;i< n;i++){
		a[i]=a[i]*a[i];
	}
}
int main()
{
	int a[5] = {1,2,3,4,5};

	int n=5;

	//arrayprint(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	updatearray(a,n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}	

	return 0;
}