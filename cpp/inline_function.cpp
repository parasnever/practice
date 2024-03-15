#include<iostream>
using namespace std;
float convert(float m);
main()
{
    float m;
    cin >> m;
    cout << "kilometer is :"<< convert(m);

}
inline float convert(flaot m)
{
    return (m * 1000);
}