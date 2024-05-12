#include<iostream>
using namespace std;
class employee
{
    protected:
    char name[30];
    int number;
    public:
    void egetData()
    {
        cout << "Enter name and number: \n";
        cin >> name >> number;
    }
    void eputData()
    {
        cout << "Name is :" << name;
        cout << "Number is : "<< number;
    }
};
class scientists: public employee
{
    private:
    char pubs[30];
    public:
    void sgetData()
    {
        cout << "Enter publications :";
        cin >> pubs;

    }
    void sputData()
    {
        cout << "Publication is :" << pubs;
    }
};
class laborer:public employee
{

};

class manager: public employee
{
    private:
    char title[30];
    int dues;

    public:
    void mgetData()
    {
        cout << "Enter title and dues  :\n";
        cin >> title >> dues;

    }
    void mputData()
    {
        cout << "title and dues are :" << title << dues;
        
    }
};
int main(){
    manager m1;
    scientists s1;
    laborer l1;
    cout << "Enter data from manager : \n";
    m1.egetData();
    m1.mgetData();
    cout << "Enter data for scientist: \n";
    s1.egetData();
    s1.sgetData();
    cout << "'Enter data for laborer: \n";
    l1.egetData();
    cout << "data of the managers:\n ";
    m1.eputData();
    m1.mputData();
    cout << "Data of the scients:\n ";
    s1.eputData();
    s1.sputData();
    cout << "Data of laborer: \n";
    l1.eputData();
 return 0;
}