#ifndef  _MYCLASS_H
#define  _MYClASS_H

class MyClass {

public:

//CONSTUCTORS
MyClass(){
  a = 0;
  b = 0;
}

MyClass(int A, int B){
  a = A;
  b = B;
}

//DESTRUCTORS
~MyClass(){}

//SETTERS
void setA(int A)
{a = A;}

void setB(int B)
{b = B;}

void setAB(int A, int B){
  a = A;
  b = B;
}

//GETTERS

int getA()
{return a;}

int getB()
{return b;}

int AtimesB()
{return a*b;}

private:
  int a;
  int b;
};

#endif
