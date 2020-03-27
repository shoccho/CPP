#include<iostream>
#include<cmath>
//#include<<cstdio

using namespace std;
int main()
{
    double R,pi,V;
    cin>>R;
    pi=3.14159;
    V=(4.0/3)*pi*(pow (R,3));
    cout <<"VOLUME = "<< fixed << setprecision(3) <<  V <<endl;
}