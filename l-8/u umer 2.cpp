// u umer 2
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >>n;

	int a[100000];

	for(int i = 0;i<n;i++){
		cin>>a[i];
	}

	//xor
	int x = 0;
	for(int i = 0;i<n;i++){
		x = x^a[i];
	}
	//cout<<x;
	int c = 0;
	//cout<<(x|1)<<endl;

	while((x&1) != 1){
		c++;
		x = x>>1;
	}
//	cout<<c;
	int x1 = 0;
	int x2 = 0;

	for(int i =0;i<n;i++){
		 int z = a[i]>>c;
//		 cout<<a[i]<<" ";
		 if((z&1) == 1){
		 	x1 = x1^a[i];
		 }
		 else{
		 	x2 = x2^a[i];
		 }
	}
	cout<<x1<<" "<<x2;

	return 0;
}