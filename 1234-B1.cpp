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
	scanf("%d %d",&m,&n);
	int a[m];
	std::vector<int> v;
	map<int,int>mm;
	for(i=0;i<m;i++){
		scanf("%d",a+i);
		
		bool found=false;
		if(mm[a[i]]==1)found=true;
		else mm[a[i]]=1;
		if(!found){
			v.push_back(a[i]);

		}
		if(v.size()>n){
			mm[v[0]]=0;
			v.erase(v.begin());

		}
	}
	

	printf("%d\n",v.size() );
	for(i=v.size()-1;i>=0;i--){
		
		printf("%d",v[i] );
		if(i)printf(" ");
	}
	printf("\n");
	return 0;
}


