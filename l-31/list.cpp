// list
#include <iostream>
#include <list>
using namespace std;

int main()
{

	// list<int> l;

	// //insertion

	// l.push_front(4);
	// l.push_front(3);
	// l.push_front(2);
	// l.push_front(1);

	// while(!l.empty()){
	// 	cout<<l.front()<<" ";
	// 	l.pop_front();
	// }


	// cout<<endl;
	// list<pair<char,char> > l1;

	// //pushng a pair

	// l1.push_front(make_pair('a','c'));

	// pair<char,char> p;
	// //cin>>p.first>>p.second;
	// p.first='a';
	// p.second= 'd';

	// l1.push_front(p);

	// l1.push_front(make_pair('c','d'));
	// l1.push_front(make_pair('d','e'));


	// while(!l1.empty()){
	// 	pair<char,char> d = l1.front();
	// 	cout<<d.first<<" "<<d.second<<endl;
	// 	l1.pop_front();
	// }


	//Adjency list

	       list<int>*  l     = new list<int>[5];

	       l[0].push_back(1);
	       l[0].push_back(4);
	       l[1].push_back(2);
	       l[1].push_back(0);
	       l[1].push_back(3);
	       l[1].push_back(4);
	       l[2].push_back(1);
	       l[2].push_back(3);
	       l[3].push_back(1);
	       l[3].push_back(2);
	       l[3].push_back(4);
	       l[4].push_back(0);
	       l[4].push_back(1);
	       l[4].push_back(3);



	       for(int i=0;i<5;i++){
	       		cout<<i<<"-->";
	       		while(!l[i].empty()){
	       			cout<<l[i].front()<<" ";
	       			l[i].pop_front();
	       		}
	       		cout<<endl;
	       }










	
	return 0;
}