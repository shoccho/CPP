#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
#define maxint 1000000000;
//reverse sort(a,a+n,greater<int>());
//std::map<std::string, int>::iterator it = mapOfWordCount.begin();
int main()
{	
	

	// freopen("i.txt", "r", stdin);
	// freopen("o.txt", "w", stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&k);
	while(k--){
		scanf("%d",&n);
		int a[n];
		int pos=-1;
		for(i=0;i<n;i++){
			scanf("%d",a+i);
			if(a[i]==1)pos=i;
		}
		bool left =true;
		bool right =true;
		for(i=1;i<n;i++){
		if(a[(pos-i+n)%n]!=i+1)left=false;
		if(a[(pos+i+n)%n]!=i+1)right=false;

		}
		if(left || right)printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}