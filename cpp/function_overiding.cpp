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
    second s1;
    s1.getData();
}