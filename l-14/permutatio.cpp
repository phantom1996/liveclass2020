// permutatio
#include <iostream>
using namespace std;


void permut(char a[],int i){

	if(a[i]== '\0'){
		cout<<a<<endl;

		return;
	}

	for(int j=i;a[j]!='\0';j++){
		swap(a[i],a[j]);

		permut(a,i+1);

		swap(a[i],a[j]);  //acktrackivg
	}

}




int main()
{
	char a[] = "ABC";

	permut(a,0);
	
	return 0;
}