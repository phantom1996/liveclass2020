// pali
#include <iostream>
#include <string>
using namespace std;

int len(string s){

	int leni = 0;

	while(s[leni]!='\0'){
		leni++;
	}

	return leni;
}


bool is_pali(string s){

	int i = 0;
	int j = len(s) -1;

	while(i<j){
		if(s[i]!=s[j]){
			return false;
		}
		i++;
		j--;
	}

	return true;
}


int main()
{


	string s;

	cin>>s;

	cout<<boolalpha<<is_pali(s);
	
	return 0;
}