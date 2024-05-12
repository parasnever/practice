#include<iostream>
using namespace std;
class test 
{
    private:
    int num1, num2;
    friend class first;
    public:

};
class first
{
    private: 
    int res;
    test t;
    public:
     void sum()
     {
        cout << "\n Enter first num: "<<endl;
        cin >> t.num1;
        cout << "\n Enter second num: "<< endl;
        cin >> t.num2;
        res = t.num1 + t.num2;
        cout << "\n Sum is :" << res;

     }
};
main(){
    first f1;
    f1.sum();
}