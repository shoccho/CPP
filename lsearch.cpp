#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{	
	FastIO;

	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p;
	
	cout<<"Enter the size of the array"<<endl;
	cin>>j;

	int a[j];
	
	for(i=0;i<j;i++)cin>>a[i];

	cout<<"Enter any number to search"<<endl;
	cin>>k;

	for(i=0;i<j;i++){if(a[i]==k)break;}

	if(i==j)cout<<"Not found on this array"<<endl;
	else cout<<"Found"<<endl;

		return 0;
}