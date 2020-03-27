#include<bits/stdc++.h>
using namespace std;
bool isb(int x){
	int i,j,k,l;
	i=x%10;
	j=(x%100)/10;
	k=(x%1000)/100;
	l=x/1000;
	//cout<<i<<" "<<j<<" "<<k<<" "<<l;
	if(i==j || i==k ||i==l || j==k || j==l || k==l)return false;
	return true;
}
int main()
{
	//freopen("i.txt","r",stdin);
	//freopen("o.txt","w",stdout);
	int i,j,k,l,m,n,o,p;
	cin>>m;
	m++;
	while(!isb(m)){
		m++;
	}
	cout<<m;
	return 0;
}