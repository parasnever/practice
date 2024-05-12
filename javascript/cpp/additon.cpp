
#include <iostream>
using namespace std;
class area 
{
    private:
    int l,b;
    public:
    void getData(){
        cin >> l >>b;
    }
    void displayData(){
        int a;
        a = l + b;
        cout << "Area is :"<< a <<endl;
    }
};

int main() {
    area a1;
a1.getData();
a1.displayData();
return 0;
}