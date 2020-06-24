// phoekeypad
#include <iostream>
#include <string>
using namespace std;

string keypad[] = {".%","+*","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};


void phoekeypad(char a[],int i,char output[],int j){

	if(a[i] == '\0'){
		output[j]  = '\0';
		cout<<output<<endl;
		return;
	}


	int digit  = a[i] - '0';

	for(int index  = 0 ; keypad[digit][index]!='\0';index++){

		output[j]  = keypad[digit][index];

		phoekeypad(a,i+1,output,j+1);
	}	


}


int main()
{

	char a[100];
	cin >> a;


	char output[100];

	phoekeypad(a,0,output,0);


	
	return 0;
}