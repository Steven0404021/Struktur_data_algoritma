#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::insertToHead(int input){
	Node *newNode = new Node;
	newNode->value = input;
	
	newNode->next = head;
	head = newNode;
	
	if(tail==NULL)
		tail = head;
		
}

void LinkedList::insertToTail(int input){
 Node *newnode = new Node();
 if(head==NULL){
    head=newnode;
    tail=newnode;
 }
 newnode->value = input;
 tail->next = newnode ;
 tail = newnode;

}

void LinkedList::inserAfter(int input,int afternode){ //value baru yang mau di masukain, value setelahnya
    Node *newnode = new Node();
    newnode->value = input;
    Node *tmp = head;
    while (tmp != NULL && tmp->value != afternode){
        tmp = tmp->next;
    }
    if(tmp != NULL){
        newnode->next = tmp->next;
        tmp->next = newnode;
    }else{
     cout<<"node kosong"<<endl;
    }

}

void LinkedList::deleteFromHead(){
	 if (head == NULL) {
        cout << "Linked list kosong" << endl;
        return;
    }
    Node *tmp = head;
    head = head->next;
    
    
    cout << "Node sudah di delete" << endl;
}

void LinkedList::deleteFromTail(){
	Node *tmp=tail;
	Node *tmp2=head;
while(tmp2 != nullptr && tmp2->next != tail){
    tmp2=tmp2->next;
}
  if(tmp2!= nullptr){
  tail=tmp2;
  delete tmp;
  tmp2->next =nullptr;
}else{
cout<<"node kosong"<<endl;
    }
}

void LinkedList::printAll(){
 Node *tmp = head ;
  while(tmp!=nullptr){
    cout<< tmp->value <<"->";
    tmp=tmp->next;
  }
 cout<<endl;
}