// reverse stack
#include <iostream>
#include <stack>
using namespace std;


void Insert_stack(stack<int> &s,int top){

	if(s.empty()){
		s.push(top);
		return;
	}

	int upper_Element = s.top();
	s.pop();
	Insert_stack(s,top);

	s.push(upper_Element);

}

void reverseastack(stack<int> &s){
	if(s.empty()){
		return;
	}

	int top = s.top();

	s.pop();

	reverseastack(s);
	Insert_stack(s,top);
}



int main()
{

	stack<int> s;


	for(int i=1;i<=3;i++){
		s.push(i);
	}
	cout<<s.top()<<endl;

	reverseastack(s);


	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}


	return 0;
}