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
	l=(int)(min(m,n));
	for(i=1;i<=l;i++){
		for(j=1;j<=l;j++){
			if(i*i+j==m && j*j+i==n){
				q++;

				}
			}
		}
		
		if(m*m==n )q++;
		if(n*n==m)q++;
		printf("%d\n", q);
	return 0;
}
