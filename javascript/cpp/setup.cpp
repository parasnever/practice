#include<iostream>
using namespace std;

class myClass {
    public:
        void getData(){
            cout << "Enter two numbers: ";
            cin >> a >> b;
        };
        void displayData(){
            cout << "this of the sum: " << a + b << endl;
        };
};

int main() {
    myClass m1;
    m1.getData();
    m1.displayData();

    return 0;
}
