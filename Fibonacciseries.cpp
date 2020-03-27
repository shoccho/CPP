#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

ll fib(ll p){

	if(p==0 || p==1 )return 1;
else  return fib(p-1)+fib(p-2);
}

int main()
{	
	FastIO;
	
	/*freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
*/
	ll i,j,k,l,m,n,o,p;
	
	cout<<"Enter a number"<<endl;
	cin>>j;

	cout<<"Generating the Fibonacci series till "<<j<<"th element"<<endl;
	for(i=0;i<j;i++)
		cout<<fib(i)<<" ";
	cout<<endl;
	return 0;
}