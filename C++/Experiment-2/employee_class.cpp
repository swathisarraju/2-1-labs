#include<iostream>
#include<string>
using namespace std;
class employee{
  int eid;
  string name;
  float sal;
  
  public:
    void read(){
      cout<<"enter the details:"<<endl;
      cin>>eid>>name>>sal;
    }
    void display(){
      cout<<"The details are:"<<endl;
      cout<<"Emp id is : "<<eid<<endl;
      cout<<"Emp name is :"<<name<<endl;
      cout<<"Sal is:"<<sal<<endl;
    }
};
int main(){
  employee e1;
  e1.read();
  e1.display();
  return 0;
}
    
