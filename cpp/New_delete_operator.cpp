#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int total =0;
    int * arr;
    float average;
    cout << "How many numbers: \n";
    cin >> n;
    arr = new int [n]; // dynamic memory allocation 
    cout << "Enter elements: \n";
    for(i=0;i < n;i++){
        cin >> arr[i];
    }
    for (i =0;i < n ; i++){
        total = total + arr[i];

    }
    average = total / n;

    cout << "Total is:"<<total <<endl;
    cout << "Average is :"<<average<<endl;
    delete [] arr;
}