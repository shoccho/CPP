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
	int t=0,pt=0;
		int b=0;
	char x[100000],y[1000000];
	
	while(scanf("%d %d",&m,&n)!=EOF){
	 t=0,pt=0;
		 b=0;
		t+=m;
		b+=m;
		while(b>=n){
			pt=b/n;
			t+=pt;
			b=b%n;
			b+=pt;
		}
	cout<<t<<endl;

	}
	return 0;
}