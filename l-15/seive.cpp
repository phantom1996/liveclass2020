// seive
#include <iostream>
using namespace std;
bool prime[1000000];
void primeseive(int n){
	int ans[500001];
	int j=0;
	for(int i=0;i<1000000;i++){
		prime[i]=true;
	}

	prime[0]=false;
	prime[1]=false;


	for(int i =2; i*i <=1000000 ;i++){
		if(prime[i]== true){
			ans[j]=i;
			j++;
			for(int p= i*i ; p<=1000000;p+=i){
				prime[p]=false;
			}
		}
	}

	cout<<ans[n-1];
	// for(int i=0;i<n+1;i++){
	// 	cout<<i<<"->"<<prime[i]<<endl;
	// }




}





int main()
{

	int n ;
	cin >> n;


	primeseive(n);
	
	return 0;
}