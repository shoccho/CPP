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
	cin>>x;
	l=strlen(x);
	int max=0;
	for(i=0;i<l;i++){
		
		if(x[i]!='A' && x[i]!='E' && x[i]!='I' && x[i]!='O' && x[i]!='U' && x[i]!='Y'){
			q++;
			
			
		}
		
		else{

			if(q>max)max=q;
			q=0;
		}
	}
	if(max<q)max=q;
	printf("%d\n", max+1);
	return 0;
}