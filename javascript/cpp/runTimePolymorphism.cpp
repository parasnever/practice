#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show(){
        cout << "this is the base class \n";
    }

};
class derv1 : public base
{
    public: 
    void show(){
        cout << "This is the derv1 class \n";
    }
};
class derv2: public base
{
    public: 
    void show()
    {
        cout << "This is the derv2 class \n";
    }
};
int main(){
    base * ptr;
    derv1 d1;
    derv2 d2;
    ptr = &d1;
    ptr -> show();
    ptr = &d2;
    ptr -> show();
}