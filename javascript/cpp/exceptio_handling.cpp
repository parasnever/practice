#include<iostream>
using namespace std;
main(){
    int a,b;
    cout << "enter the value of a and b: ";
    cin>>a>>b;
    try{
        if(b==0){
            throw(b);
        }
        else{
            cout << "The value of a and b: "<< a/b;
            
        }
    }
    catch(int x){
        cout<< "divide by zero exception: "<<x;
        
    }
}