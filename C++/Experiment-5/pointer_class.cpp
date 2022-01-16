#include<iostream>
using namespace std;

class student{
  string name;
  int rollno;
  int marks;
  
  public:
    void read(){
        cout<<"enter the details:"<<endl;
        cin>>name>>rollno>>marks;
      }
    void display(){
        cout<<endl<<"The details are: "<<endl;
        cout<<"enter name:"<<name<<endl;
        cout<<"enter roll number:"<<rollno<<endl;
        cout<<"enter marks:"<<marks<<endl;
     }
};
int main(){
  student s;
  student *p;
  p=&s;
  p->read();
  p->display();
  return 0;
}
  
