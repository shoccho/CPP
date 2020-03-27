#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long


int main()
{	
	
		
	/*freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
*/
	int i,j,k,l,m,n,o,p,q=0;
	char x[10000000],y[100000000];

	cin>>x>>y;
	if(strcmp(x,y)==0)printf("-1\n");
	else printf("%d\n",max(strlen(x),strlen(y)) );
	return 0;
}