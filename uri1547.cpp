#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{	
	FastIO;
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p;
	scanf("%d",&p);
	while(p--){
		scanf("%d %d",&m,&n);
		int a[m],mind=100000000,mi=0;
		for(i=0;i<m;i++){
			scanf("%d",a+i);
			if(mind>abs(a[i]-n)){mi=i;mind=abs(a[i]-n);}
		}
		printf("%d\n",mi+1);
	}


	return 0;
}