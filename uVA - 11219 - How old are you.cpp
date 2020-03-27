#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long


int main()
{	
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
	string str;
	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000],z;
	ll by,dy,rs;
	scanf("%d",&p);
	while(p--){	 
 		getline (cin, str);
		scanf("%d %c %d %c %d",&m,&z,&n,&z,&o);
		scanf("%d %c %d %c %d",&j,&z,&k,&z,&l);
		by=o*365+n*30+m;
		dy=l*365+k*30+j;
		rs=by-dy;
		printf("Case #%d: ",++q);
		if(rs<0)printf("Invalid birth date\n");
		else if(rs/365 >130)printf("Check birth date\n");
		else printf("%d\n",rs/365);
	}
	return 0;
}
