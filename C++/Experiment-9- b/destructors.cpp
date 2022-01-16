#include <iostream>
using namespace std;

class add{
    public:
    int y, z;
    add(){
        y = 2;
        z = 18;
    }
    ~add(){ }
};
int main(){
    add a;
    cout <<"Sum is: "<< a.y+a.z<<endl;
    return 1;
}

