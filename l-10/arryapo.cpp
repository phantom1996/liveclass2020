// arryapo
#include <iostream>
using namespace std;

void fuc(int *a,int s){

	for(int i=0;i<s;i++){
		cout<<a[i]<<" ";
	}
	return;
}

void fuc1(int *a,int s){

	for(int i=0;i<s;i++){
		cout<<*(a+i)<<" ";
	}
	return;
}

int main()
{
	int a[]={1,2,3};

	int s=3;

	fuc(a,s);
	cout<<endl;
	fuc1(a,s);
	return 0;
}