// optimised bubble sort
#include <iostream>
using namespace std;

int main()
{
	int a[]={1,2,3,4,5,5,4,3,2,1};
	int n = sizeof(a)/sizeof(int);

	for(int i=0;i<n-1 ;i++){
		int kyaifmeigaya = 0;
		for(int j =0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				kyaifmeigaya++;
				swap(a[j],a[j+1]);
			}
		}
		if(kyaifmeigaya==0){
			break;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}	 	
	return 0;
}