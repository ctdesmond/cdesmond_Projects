/*
Author: Connor T Desmond
Purpose: Linked List class
Date of Last Modification: 12/10/17
Filename: LinkList.h
*/
#ifndef _LINKLIST_H_
#define _LINKLIST_H_

#include "node.h"
#include <string>
#include <math.h>
using std::cout;
using std::endl;
using std::string;

class LinkList {

//PUBLIC DATA MEMBERS AND METHODS
public:

//CONSTRUCTOR
LinkList(){
root = NULL;
length = 0;
}

//DECONSTRUCTOR
~LinkList(){};

//Puts a new node onto the head of the link list structure
void push(int value){
  node* n = new node();
  n->setValue(value);
  n->setNext(root);
  root = n;
  length++; //keeps track of the length of link list
}

//removes the head node of the link list structure
void pop(){
  node* temp = new node();
  temp = root;
  root = root->getNext();
  length--; //keeps track of the length of link list
  delete temp;
}

//a simple display of the contents of the link list
void display(){
  node* temp = new node();
  temp = root;
  for (int i = 0; i < length; i++){
    cout << temp->getValue()<<endl;
    temp = temp->getNext();
  }
  delete temp;
}

//a more visual appealing representation of the link list structure
//input is the number of node column
void print(int wrap){
  int numWraps = length/wrap + 1; // # of node rows

  node* temp = new node();
  temp = root;

  //controls the printing of rows
  for (int i = 0; i < numWraps; i++){
    string boarder = "";
    string content = "";
    string s1 = "+-+-+-+  ";
    //controls the printing of columns
    for (int j = 0; j < wrap; j++){

      if(temp != NULL){//tests to see if end of the list has been reached
      boarder = boarder + s1;
      content = content + printHelp(temp->getValue());
      temp = temp->getNext();
      }
    }
    cout << boarder +"\n";
    cout << content +"\n";
    cout << boarder +"\n";
  }

  delete temp;
}

//returns the current length of list
int getLength()
{return length;}

//returns a pointer to the head node of the linked list
node* getRoot()
{return root;}

//PRIVATE DATA MEMBERS AND METHODS
private:
node* root;
int length;

//adjusts for the number of digits that any given value can have.
string printHelp(int value)
{
  string s2 = "";
  if(value < 10)
    s2 = "|  " + std::to_string(value) + "  |->";
  else if( value < 100)
    s2 = "| " + std::to_string(value) + "  |->";
  else
    s2 = "|" + std::to_string(value) + "  |->";
  return s2;
}

};

#endif
