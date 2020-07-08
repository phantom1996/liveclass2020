// fact of l
#include <iostream>
using namespace std;

int a[10000000];

int	multiply(int a[],int num ,int size){

	int carry = 0;

	for(int i=0;i<size;i++){
		int prod = a[i] * num + carry;

		a[i] = prod%10;

		carry = prod/10;
	}

	while(carry >0){
		a[size] = carry%10;

		carry = carry/10;

		size++;
	}

	return size;

}
void Fact(int n){

	a[0]=1;
	int size =1;

	for (int i = 2; i <=n; i++)
	{
		size =  multiply(a,i,size);
	}

	for(int i=size-1;i>=0;i--){
		cout<<a[i];
	}
	// cout<<endl<<size;
}

int main()
{


	int n;
	cin>>n;

	Fact(n);
	
	return 0;
}

