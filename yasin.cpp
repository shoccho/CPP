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
	char x[100000],y[1000000];


scanf("%d",&j);
	n=j%60;
	m=j/60;
	j/=60;
	m%=60;
	//m+=j%60;
	l=j/60;
	printf("%d:%d:%d\n",l,m,n);


	return 0;
}
