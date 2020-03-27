#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long


int main()
{	
	
		
	// freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d %d",&m,&n);
	int max=0;
	for(i=0;i<m;i++){	
		scanf("%d %d",&k,&l);
		if(l>n)
			o=k-(l-n);
		else
			o=k;
		if (i==0) max=o;
		else if( i && max<o)max=o;

	}
	printf("%d\n",max );
	return 0;
}