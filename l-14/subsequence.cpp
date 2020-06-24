// subsequence
#include <iostream>
using namespace std;


void subsequence(char a[],int i,char output[],int j){

	//ase case

	if(a[i] == '\0'){

		output[j] = '\0';
		cout<<output<<endl;

		return;
	}

	subsequence(a,i+1,output,j);  //ek baar nahi lagaya
	output[j] = a[i];
	subsequence(a,i+1,output,j+1);   //ek baar lagaya
 

	// output[j] = a[i];
	// subsequence(a,i+1,output,j+1);   //ek baar lagaya
 
	// subsequence(a,i+1,output,j);  //ek baar nahi lagaya

}




int main()
{

	char a[] = "abc";


	char output[1000];


	subsequence(a,0,output,0);
	
	return 0;
}