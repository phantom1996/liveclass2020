// vector
#include <iostream>

#include <vector>


using namespace std;

int main()
{


	vector<int> v;

	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	cout<<v.max_size()<<endl;


	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	//cout<<v.max_size()<<endl;


	cout<<v.front()<<endl;

	cout<<boolalpha<<v.empty()<<endl;

	// for(int i=1;i<10;i++){

	// 	v.push_back(i);
	// }

	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";
	// }

	v.pop_back();
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
	return 0;
}