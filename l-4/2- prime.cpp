// 2- prime
// primeorot
#include <iostream>
using namespace std;

int main()
{
	int k;
	// input

	cin >> k;


	for(int i= 2;i<= k;i++){
		 int j;

		// while(j<i){
		// 	if(i%j== 0){
		// 		break;
		// 	}
		// 	j++;
		// }
		// if(j== i){
		// 	cout<<i<<" ";
		// }
		for(j= 2;j<i;j++){
			if(i%j== 0){
				break;
			}
		}
		if(i==j){
			cout<<i<<" ";
		}


	}

	
	return 0;
}