#include<iostream>
using namespace std;
class base
{
    public:
    void show(){
        cout << "This is the base class \n";
    }
};
class derv1: public base
{
    public:
    void show(){
        cout << "This is the  derived class 1 \n";
    }
};
class derv2: public base
{
    public:
    void show(){
        cout << "This is the derved class 2 ";
    }
};
int main(){
    base * ptr;
    derv1 d1;
    derv2 d2;
    ptr = &d1;
    ptr ->show();
    ptr = &d2;
    ptr -> show();
}