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
	std::vector<int> v;	
	scanf("%d %d",&n,&k);
	bool in;
	l=0;
	while(n--){
		l++;
		scanf("%d",&p);
		in=false;
		while(p--){
			scanf("%d",&q);

			if(q<k && !in){
				in=true;
				v.push_back(l);
			}
		}
	}
	printf("%d\n",v.size() );
	for(i=0;i<v.size();i++){
		if(i)printf(" ");
		printf("%d",v[i]);
	}
	printf("\n");


	return 0;
}