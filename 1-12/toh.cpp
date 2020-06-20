// toh
#include <iostream>
using namespace std;


void TOH(int n ,char src ,char helper , char dest){


	//ase case
	if(n == 0){
		return;
	}

	TOH(n-1,src,dest,helper);
	cout<<"Moving "<<n<<" "<<src<<" to "<<dest<<endl;

	TOH(n-1,helper,src,dest);
}



int main()
{

	int n;
	cin >> n;

	TOH(n ,'A','B' ,'C');
	
	return 0;
}