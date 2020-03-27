#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 

int main()
{	
	
			
	// freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);
	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d %d %d %d",&i,&j,&m,&n);
	int misha=max(3*i/10,i-(i/250 )*m);
	int vasya=max(3*j/10,j-(j/250 )*n);
	if(misha>vasya)printf("Misha\n");
	else if(vasya>misha)printf("Vasya\n");
	else printf("Tie\n");
	return 0;
}