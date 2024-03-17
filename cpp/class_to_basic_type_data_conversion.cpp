#include<iostream>
using namespace std;
class convertor
{
    private:
    int len;
    public:
    void getdata(){
        cout<< "enter the len in km : \n";
        cin >> len;
    }
    operator float(){
        float m;
        m = len * 1000.0;
        return(m);
    }
};
int main(){
    convertor c1;
    c1.getdata();
    float l1;
    l1 = c1;
    cout << "Length in meter is : "<<l1<<endl;
}
