#include<iostream>
using namespace std;
float convert(float m);
int main()
{
    float m;
    cin >> m;
    cout << "kilometer is :"<< convert(m);

}
inline float convert(float m)
{
    return (m / 1000);
}