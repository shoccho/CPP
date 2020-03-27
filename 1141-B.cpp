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
	int a[n];
	int max=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]!=1){
			if(q>max)max=q;
			q=0;
		}
		else q++;
	}
	if(a[i-1]==1){
		i=0;
		while(a[i]!=0){
			i++;
			q++;
		}
	}
	if(q>max)max=q;
	if(a[0] ==1 && a[n-1]==1)if(max<2)max=2;
	printf("%d\n", max);

	return 0;
}