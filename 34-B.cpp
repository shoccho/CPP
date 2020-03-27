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
	int a[m];
	for(i=0;i<m;i++){
		scanf("%d",a+i);
	}
	sort(a,a+i);
	o=0;
	for(i=0;i<m;i++){

		if(a[i]<=0 && o<n){
			q+=abs(a[i]);
			o++;
		}
	}
	printf("%d\n",q);
	return 0;
}