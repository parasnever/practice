#include<iostream>
using namespace std;
class first
{
    public:
    void getData(){
        cout<< " In the first class.";
    }
};
class second : public first
{
    public:
    void getData(){
        cout << "In the second class.";
    }
};
int main(){
    second second1;
    second1.getData();
}