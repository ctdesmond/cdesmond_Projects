#include<iostream>
#include "MyClass.h"


int main()
{
  MyClass obj1;

  obj1.setA(3);
  obj1.setB(4);

  std::cout << obj1.AtimesB();
}
