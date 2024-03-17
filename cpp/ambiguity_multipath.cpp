#include<iostream>
using namespace std;
class person
{
    protected:
    char name[30];
    int code;
    public:
    void input(){
        cout<<"Enter the name and code: \n";
        cin >> name >> code;

    }
    void display(){
        cout<<"Name and code of the person is: "<<name << " "<<code<<endl;
    }
};
class account: virtual public person
{
    protected:
    float pay;
    public:
    void getpay(){
        cout<<"enter the pay: \n";
        cin >> pay;
    }
    void display(){
        cout <<"pay: "<<pay;
    }
};
class admin: virtual public person
{
    protected:
    int experience;
    public:
    void getexp(){
        cout<<"enter the experience: \n";
        cin >> experience;
    }
    void display(){
        cout <<"experience: "<<experience;
    }
};
class master:public account, public admin
{
    private:
    char n[100];
    public:
    void gettotal(){
        cout <<"enter the company name: ";
        cin >>n;

    }
    void display(){
        cout <<"company name is : \n"<<n;
    }
};
int main(){
    master m1;
    m1.input();
    m1.getpay();
    m1.getexp();
    m1.gettotal();
    m1.person::display();
    m1.account::display();
    m1.admin::display();
    m1.display();
}