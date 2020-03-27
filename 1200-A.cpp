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
	scanf("%d",&n);
	int li=0,ri=9;
	char c;
	int a[10];

	for(i=0;i<10;i++){
	a[i]=0;	
	}
	
	for(i=0;i<n;i++){
		cin>>c;
		
		if(c=='L'){
			
			while(a[li]!=0)li++;
			a[li]=1;
		}
		else if (c=='R'){
			while(a[ri]!=0)ri--;
				a[ri]=1;
				
		}
		else if(c>='0' && c<='9'){
			

			l=c-'0';
			a[l]=0;
	ri=9;
	li=0;
		}

	}
	for(i=0;i<10;i++){
		printf("%d",a[i]);
	}

	return 0;
}