#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
struct webs
{
	char x[1000];
	int rev;
};
int main()
{	
	FastIO;
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p;
	
	scanf("%d",&k);
	struct webs url[10+1];
	int max;
	for(l=1;l<=k;l++){
		max=0;
		for(i=0;i<10;i++){scanf("%s %d",url[i].x,&url[i].rev); if(url[i].rev>max)max=url[i].rev;}
		printf("Case #%d:\n", l);
		for(i=0;i<10;i++){
			if(url[i].rev==max)printf("%s\n",url[i].x);
		}
	}

	return 0;
}