#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

ll fact(ll j){
	if(j==1) return 1;
	else {
		return j*fact(j-1);
	}
}

int main()
{	
	FastIO;
	
	/*freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
*/
	ll i,j,k,l,m,n,o,p;
	cout<<"Enter a number to calculate the factorial"<<endl;
	cin>>p;
	cout<<"The factorial of "<<p<<" is "<<fact(p)<<endl;
	return 0;
}