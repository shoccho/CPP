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
	scanf("%d",&j);
	while(j--){


	scanf("%d %d",&m,&n);
	if(m==n)printf("0\n");
	else if(m>n){
		int diff=m-n;
		if(diff%2==0)
			printf("1\n");
		
		else printf("2\n");
	}
	else{
		int	diff=n-m;
		if(diff%2!=0)
			printf("1\n");
		
		else printf("2\n");
		}
	}
	return 0;
}