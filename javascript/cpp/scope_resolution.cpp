#include<iostream>
using namespace std;
class A 
{
    public:
    void show(){
        cout << "From class A \n";
    }
};
class B 
{
    public:
    void show(){
        cout << "From class B";
    }
};
class C : public A,public B{

};
int main(){
    C c1;
    c1.A::show();
    c1.B::show();
}