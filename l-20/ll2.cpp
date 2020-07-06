// ll2
#include <iostream>
#include "ll.h"

using namespace std;

int main()
{
	// LinkList l;

	// for(int i=1;i<=6;i++){
	// 	l.Insertion_at_tail(i);
	// }
	// l.print();
	// cout<<endl;
	// cout<<l.mid()<<endl;
	
	 LinkList l1;
	// LinkList l2;

	l1.Insertion_at_tail(1);
	l1.Insertion_at_tail(2);
	l1.Insertion_at_tail(3);
	l1.Insertion_at_tail(4);
	l1.Insertion_at_tail(5);
	l1.Insertion_at_tail(6);
	// l2.Insertion_at_tail(5);
	// l2.Insertion_at_tail(6);
	// l2.Insertion_at_tail(7);



	// l1.head = MergeLL(l1.head,l2.head);

	//l1.head = MergeSort(l1.head);
 	l1.tail->next = l1.head->next->next;
 	//cout<<"hello";
 	F_cycle_detection(l1.head);

 	l1.print();

	return 0;
}