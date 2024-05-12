#include<iostream>
using namespace std;
class rectangle{
    private: 
    int l , b;
    public:
    rectangle(int l1, int b1){
        l = l1;
        b = b1;

        
    }
    void displayData(){
        int a ;
        a = l * b;
        cout << "area of the rectangle :"<< a;
    }
};
int main(){
    rectangle  r1(10,4);
    r1.displayData();
    return 0;
}