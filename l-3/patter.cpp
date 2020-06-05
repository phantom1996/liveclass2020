// patter
#include <iostream>
using namespace std;

int main()
{
	int n;

	cin >> n;

	int row  =1;

	int num =1;
	int col = 1;
	//loop row
	while(row <=  n){
		//int col=1; automatic
		while(col<=row ){
			cout<< num << ' ';
			num++;
			col++;
		}
		row++;
		col=1;
		cout<<endl;
	}
	
	return 0;
}