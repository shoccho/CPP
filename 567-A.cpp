#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
int dist(int a,int b){
	if(a<0){
		if(b<0) return abs(a)-abs(b);
		return b+abs(a);
	}
	return  b-a;
}

int main()
{	
	
		
	// freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
	for (int i = 0; i < n-1; ++i)
	{
		if(!i){
			printf("%d ",dist(a[i],a[i+1]));

		}
		else printf("%d ", min(dist(a[i-1],a[i]),dist(a[i],a[i+1])));
	
		printf("%d \n",max(dist(a[0],a[i]),dist(a[i],a[n-1])));
	}
	printf("%d %d\n",dist(a[n-1-1],a[n-1]),dist(a[0],a[n-1] ));
	
	return 0;
}