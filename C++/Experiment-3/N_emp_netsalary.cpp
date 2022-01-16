#include<iostream>
using namespace std;
class N_emp{
    int eid;
    string emp_name;
    int basic;
    float DA,IT,GS;
  public:
    void get_data(){
      cout<<"enter the details:"<<endl;
      cout<<"emp ID is:";
      cin>>eid;
      cout<<"emp name is:";
      cin>>emp_name;
      cout<<"basic is:";
      cin>>basic;
    }
    void put_data(){
      cout<<"The details are:"<<endl;
      cout<<"emp num is:"<<eid<<endl;
      cout<<"emp name is:"<<emp_name<<endl;
      cout<<"basic salary="<<basic<<endl;
      DA=0.52*basic;
      GS=basic+DA;
      IT=0.30*GS;
      cout<<"GS ="<<GS<<endl;
      cout<<"DA ="<<DA<<endl;
      cout<<"IT ="<<IT<<endl;
    }
};
int main(){
  N_emp e[3];
  for(int i=0;i<3;i++){
    e[i].get_data();
  }
  for(int i=0;i<3;i++){
    e[i].put_data();
  }
  return 0;
}
