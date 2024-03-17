#include<iostream>
using namespace std;
class Polygon
{
    protected:
    int length,height;
    public:
    void getdata(){
        cout <<"Enter length and height :";
        cin >>length >>height;
    }
    virtual void Area() = 0;

};
class Rectangle : public Polygon
{
    public:
    void Area(){
        int a;
        a = length * height;
        cout<<"The area of the rectangle is : "<<a;
    }

};
class Triangle :public Polygon
{
    public:
    void Area(){
        float a1;
        a1= (0.5 * length * height);
        cout <<"The area of the Triangle is : "<<a1;
    }
};
int main(){
    Polygon * ptr;
    Rectangle R1;
    Triangle T1;
    ptr = &R1;
    ptr ->getdata();
    ptr ->Area();
    ptr = &T1;
    ptr ->getdata();
    ptr ->Area();


}