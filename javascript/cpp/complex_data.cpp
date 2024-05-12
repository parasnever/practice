#include<iostream>
using namespace std;
class complex
{
    private:
    float real , img;
    public :
    void getdata(){
        cout<<"enter real and img : \n";
        cin >> real >> img;
    }
    complex addcomplex(complex c2){
        real = real + c2.real;
        img = img + c2.img;
        return * this;

    }
    void display(){
        cout << real << "+" <<img <<"i";

    }

};
int main() {
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1.addcomplex(c2)
    c3.display();
}