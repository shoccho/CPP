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
	scanf("%d",&p);
	n=0;
	while(p--){
		scanf("%s",x);
		if(strcmp("donate",x)==0){
			scanf("%d",&o);
			n+=o;
		}
		else printf("%d\n",n);
	}
	return 0;
}