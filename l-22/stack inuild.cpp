// stack inuild
#include <iostream>
#include <stack>

// #include <bits/stdc++.h>

using namespace std;

int main()
{

	stack<int> s;

	for(int i=1;i<=5;i++){
		s.push(i);
	}

	//cout<<s.top()<<endl;

	s.pop();

	//cout<<s.top()<<endl;

	cout<<s.size()<<endl;
	
	cout<<s.empty()<<endl;


	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}

	cout<<s.empty();



	return 0;
}