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
	scanf("%d %d",&n,&m);
vector<int>v;
int a[n];
int cou=n;
	for(i=0;i<n;i++){
		scanf("%d",&p);
		a[i]=p;
	}
	while(cou>0){
		for(i=0;i<n;i++){
			if(a[i]==-1) continue;
			else if(a[i]<=m){
				a[i]= -1;
				cou--;
				q=i;
			}
			else a[i]-=m;
		}
	}printf("%d\n",q+1);

	return 0;
}