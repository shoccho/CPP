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
	int i,j,k,l,m,n,o,p,q,x,y;
	scanf("%d",&l);
	for(i=1;i<=l;i++){
		scanf("%d %d %d %d",&m,&n,&p,&q);
		scanf("%d",&k);
		printf("Case %d:\n",i);
		while(k--){

			scanf("%d %d",&x,&y);
			if(x>m && y>n && x<p && y<q)printf("Yes\n");
			else printf("No\n");
		}
	}
	
	return 0;
}