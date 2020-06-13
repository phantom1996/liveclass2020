// biary search
#include <iostream>
using namespace std;

bool biarysearch(int a[],int s,int e,int key){

	while(s<=e){

		//first work
		int mid_index = (s+e)/2;

		//1
		if(a[mid_index] == key ){

			cout <<s<<" "<<e;
			return true;
		}

		else if(key<a[mid_index]){
			e = mid_index - 1;
		}

		else{
			s= mid_index +1;
		}

	}
cout <<s<<" "<<e;
	return false;

}


int main()
{

	int a[]={1,2,3,4,5};

	int n= sizeof(a)/sizeof(int);

	int key = -1;

	cout<< boolalpha << biarysearch(a,0,n-1,key);
	
	return 0;
}