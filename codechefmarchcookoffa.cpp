#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
#define maxint 1000000000;
int main()
{	
	

	freopen("i.txt", "r", stdin);
	freopen("o.txt", "w", stdout);

	int i,j,k,l,m,n,o,p,q=0;
	
	
	scanf("%d",&k);
	while(k--){
		scanf("%d",&n);
		char x[n+1];
		cin>>x;
		int posx=0;
		int posy=0;
			i=0;
			if(x[i]=='L')posx--;
			else if(x[i]=='R')posx++;
			else if(x[i]=='U')posy++;
			else if(x[i]=='D')posy--;
		//	printf("%d %d\n",posx,posy );
			bool waited=false;
			for(i=1;i<n;i++){
			if(x[i]==x[i-1]) continue;

			if(x[i]=='L' )posx--;
			else if(x[i]=='R')posx++;
			else if(x[i]=='U' )posy++;
			else if(x[i]=='D') posy--;
		}
		printf("%d %d\n",posx,posy);
	}
	return 0;
}