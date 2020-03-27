#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
int ff(int x){
	if(x<=100) return ff(ff(x+11));
	else return x-10;

}
int main()
{	
	FastIO;
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p;
	while(1){
		scanf("%d",&p);
		if(p==0)break;
		else printf("f91(%d) = %d\n",p,ff(p));

	}	
	return 0;
}