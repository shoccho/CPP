#include<iostream>
#include<cmath>
//#include<<cstdio
#include<bits/stdc++.h>

using namespace std;
int main()
{

	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

    double R,pi,V;
    cin>>R;
    pi=3.14159;
    V=(4.0/3)*pi*(pow (R,3));
    cout <<"VOLUME = "<< fixed << setprecision(3) <<  V <<endl;
}