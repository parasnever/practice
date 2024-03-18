#include<iostream>
using namespace std;
#include <string.h>
const int sz = [80];
class string
{
    private:
    char str[sz];
    public:
    string(){
        strcpy(str,"");
    }
    string(char s[]){
        strcpy(str,s);

    }
    void display()
    {
        cout << str;
    }
    string operator +(string s2)
    {
        string temp;
        strcpy(temp.str,str);
        strcat(temp.str,s2.str);
        return temp;
    }
};
main(){
    string s1("mery chritmas");
    string s2("happy new year");
    string s3;
    s3 = s1 + s2;
    s3.display();
}