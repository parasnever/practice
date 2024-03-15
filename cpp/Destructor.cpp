#include<iostream>
using namaspace std;
class test{
    public: 
    test(){
        cout << "control is constructor. \n";
    }
    ~test(){
        cout << "control is destructor";
    }

};
int main(){
    test t;
    cout << "control in main terminated \n"
}