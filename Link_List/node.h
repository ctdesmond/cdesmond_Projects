/*
Author: Connor T Desmond
Purpose: Link List Node class
Date of Last Modification: 12/10/17
Filename: node.h
*/
#ifndef _NODE_H
#define _NODE_H

class node
{
//PUBLIC DATA MEMBERS AND METHODS
public:

//CONSTRUCTOR
node(){
  value = 0;
  next = NULL;
}

//DESCONSTRUCTER
~node(){}

//sets the value of any given node
void setValue(int v)
{value = v;}

//returns the value of any given node
int getValue()
{return value;}

//returns a pointer which points to the next
//node in the link list structure
node* getNext()
{return next;}

//allows for the ablility to set the next pointer to point to
//another node
void setNext(node* n)
{next = n;}

private:
//PRIVATE DATA MEMBERS AND METHODS
node* next; // pointer to the next node in link list structure
int value; // value of a node
};
#endif
