// ic dec prit
#include <iostream>
using namespace std;

void printarrainc(int a[],int i,int n){

	//ase case

	if(i==n){
		return;
	}

	//1 kaam mereko karna h

	cout<<a[i]<<" ";
	//recusive case


	printarrainc(a,i+1,n);


}

void printarradec(int a[],int i,int n){

	//ase case

	if(i==n){
		return;
	}


	//recusive case


	printarradec(a,i+1,n);
	//1 kaam mereko karna h

	cout<<a[i]<<" ";

}
int main()
{

	int n;
	cin >>n;

	int a[100];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}


	printarrainc(a,0,n);
	cout<<endl;
	printarradec(a,0,n);
	return 0;
}