// patter0
#include <iostream>
using namespace std;

int main()
{

	int n;
	cin>>n;

	for(int row=1;row<=n;row++){
		//row
		int col;

		if(row%2==0){
			//start 0 ele prit queal to i
			int val=0;
			for(col=1;col<=row;col++){
				cout<<val<<" ";
				val=1-val;
			}
		}
		else{
			//start 1 ele pri equal to i
			int val=1;
			for(col=1;col<=row;col++){
				cout<<val<<" ";
				val=1-val;
			}			
		}
		cout<<endl;

	}	
	
	return 0;
}