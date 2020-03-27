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
	if(n%m!=0)printf("-1\n");
	else{
		k=n/m;
		while(k>=2){
			q++;
			if(k%2==0)k/=2;
			else if(k%3==0)k/=3;
			else break;
		}
		if(k!=1)printf("-1\n");
		else printf("%d\n",q );
	}

	return 0;
}