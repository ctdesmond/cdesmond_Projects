
/*
Author: Connor T Desmond
Purpose: Driver for Linked List class
Date of Last Modification: 12/10/17
Filename: LinkList_Driver.cpp
*/
#include <iostream>
#include "node.h"
#include "LinkList.h"
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(){

//tests the contructor for the LinkList class
LinkList* list = new LinkList();

//tests the push() method for the LinkList class
for (int i = 0; i < 101 ; i++){
  list->push(i);
}

LinkList* list2 = new LinkList();

//tests the print() for the LinkList class
list->print(5);

list2->push(7);
list2->push(8);
list2->push(9);
cout << "Before Processing"<<endl;
list2->display();//tests the display() function for the LinkList class
list2->pop();//tests the pop() function for the LinkList class
cout << "Popped the 9 off"<<endl;
list2->display();
list2->pop();
cout << "Popped the 8 off"<<endl;
list2->display();
list2->push(8);
list2->push(9);
cout << "Pushed the 8 and 9 back on the linked list"<<endl;
list2->display();




}
