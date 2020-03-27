#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
map<int,int>x;

int main()
{	
	FastIO;
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p;
	while(1){
		x.clear();
		scanf("%d %d",&m,&n);
		//printf("%d %d\n",m,n );
		if(m==0 && n==0)break;
		for(i=0;i<n;i++){

			scanf("%d",&j);
			x[j]++;
			//printf("%d %d\n",j,x[j]);
		}
		j=0;
		for(map<int,int>::iterator it=x.begin();it!=x.end();it++) if(it->second>1)j++;
	
		printf("%d\n",j);
		
	}
	return 0;
}