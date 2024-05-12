#include<iostream>
using namespace std;
class convertor
{
    private: 
    int meter;
    public: 
    convertor(){
        meter = 0;
    }
convertor( float km){
    meter = km * 1000;
}
void display(){
    cout << "the meter is :"<< meter;
}
};
int main(){
    convertor c1;
    float km;
    cout <<"Enter the kilometers you want to convert:"<< endl;
    cin >> km;
    c1 = km;
    c1.display();
    return 0;
}
