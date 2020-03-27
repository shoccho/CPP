#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long


int main()
{	
	
		
	//freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	for(i=1;i<=5;i++){
		for(j=5;j>=i;j--){
			if(j>i)printf(" ");
			else printf("*");
		}
		for(k=2;k<=i;k++)printf("*");
		printf("\n");


	}

	return 0;
}