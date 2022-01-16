#include<iostream>
using namespace std;

struct student{
  string name;
  int rollno;
  int marks;
  string branch;
};

int main(){
  student s1;
  cout<<"Enter the details:";
  cout<<"enter name:";
  cin>>s1.name;
  cout<<"enter rollno:";
  cin>>s1.rollno;
  cout<<"enter marks:";
  cin>>s1.marks;
  cout<<"enter branch:";
  cin>>s1.branch;

  cout<<"name:"<<s1.name<<endl;
  cout<<"rollno:"<<s1.rollno<<endl;
  cout<<"marks:"<<s1.marks<<endl;
  cout<<"branch:"<<s1.branch<<endl;
  return 0;
}
