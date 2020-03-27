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
	o=max(m,n);
	l=6-o+1;
	if(l==1)
		printf("1/6\n");
	else if(l==2)
		printf("1/3\n");
	else if(l==3)
		printf("1/2\n");
	else if(l==4)
		printf("2/3\n");
	else if(l==5)
		printf("5/6\n");
	else printf("1/1\n");
	return 0;
}