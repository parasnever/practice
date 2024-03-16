#include<iostream>
using namespace std;
class Person
{
    protected:
    char name[30];
    char address[30];
    public:
    void PgetData(){
        cout << "Enter the Name and address: "<<endl:
        cin >> name >> address;

    }
};
class Employee
{
    protected: 
    int id;
    int salary;
    public:
    void EgetData(){
        cout << "Enter the id and salary :"<< endl;
        cin >> id >> salary;
    }

};
class Manager: public Person, public Employee
{
    public:
    void information(){
        cout << "the name is: "<< name<<endl;
        cout << "the address is: "<< address<<endl;
        cout << "the id is: "<< id<<endl;
        cout << "the salary is: "<< salary;
    }
    
};
int main(){
    Manager m1;
    m1.PgetData();
    m1.EgetData()
    m1.information()
}