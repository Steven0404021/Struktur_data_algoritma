#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(int argc, char** argv){
	cout << "#insertToHead#\n" << endl;
	LinkedList list1;
	
	list1.insertToHead(10);
	list1.insertToHead(20);
	list1.insertToHead(30);
	list1.insertToHead(50);
	
	cout << "head: " << list1.head->value << endl; // mencari head (linked list awal)
	cout << "tail: " << list1.tail->value << endl; // mecari tail (linked list akhir)
	cout << list1.head->next->next->value << endl; //nilai yang di dapat pas di next
	
	list1.printAll(); // ngeprint semua linked list
	
	cout << "\n";
	LinkedList list2;
	list2.insertToHead(24);
	list2.insertToHead(30);
	
	list2.printAll(); // ngeprint semua linked list

	cout << "\n#insertToTail#\n\n";
	LinkedList list3;
	list3.insertToTail(40);
	list3.insertToTail(30);
	list3.insertToTail(20);
	list3.insertToTail(10);
	
	cout << "head: " << list3.head->value << endl; // mencari head (linked list awal)
	cout << "tail: " << list3.tail->value << endl; // mecari tail (linked list akhir)
	
	list3.printAll(); // ngeprint semua linked list
	
	cout << "\n#insertAfter#\n\n";
	list3.inserAfter(100,120);
	list3.inserAfter(50,10);
	list3.inserAfter(80,20);
	
	
	list3.printAll();
	
	cout << "\n#deleteFromHead\n\n";
	list1.deleteFromHead();
	
	list1.printAll();
	
	cout << "\n#deleteFromTail\n\n";
	LinkedList list4;
	list4.insertToHead(2);
	list4.insertToHead(4);
	list4.insertToTail(6);
	list4.insertToHead(8);
	
	list4.deleteFromTail();
	
	list4.printAll();
	return 0;
}