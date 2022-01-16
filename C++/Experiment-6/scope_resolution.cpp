#include<iostream>

class rectangle{
  int length;
  int breadth;
  public:
    int area();
};
int rectangle::area(){
  length=10;
  breadth=20;
  return length*breadth;
}

int num1=100;
int main(){
  rectangle r;
  int num1=500;
  std::cout<<num1<<std::endl;
  std::cout<<::num1<<std::endl;
  std::cout<<"area is: "<<r.area()<<std::endl;
  return 0;
}
