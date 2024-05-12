#include<iostream>
using namespace std;
class add
{
    private: 
    int a, b;
    public:
    void getdata(){
        cout<< "Enter the value of a and b: \n";
        cin >> a >> b;
    }
    void operator ++(){
        int c;
        c = a + b;
        cout << "sum is : "<< c;

    }
};
int main(){
    add a1;
    a1.getdata();
    ++a1;
}