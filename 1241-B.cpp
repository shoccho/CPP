#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
#define maxint 1000000000;
#define F first
#define S second
#define PB push_back
#define MP make_pair

//reverse sort(a,a+n,greater<int>());
//std::map<std::string, int>::iterator it = mapOfWordCount.begin();
int main()
{	
    
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("i.txt", "r", stdin);
	freopen("o.txt", "w", stdout);
#endif
	int i,j,k,l,m,n,o,p,q=0;
	//char x[100000],y[1000000];
	scanf("%d",&n);
	string x,y;
	while(n--){
		bool flag=true;
		cin>>x;
		cin>>y;
		int l1=x.size();
		int l2=y.size();
		int a[260],b[260];
		if(l1!=l2)flag=false;
		for(i=0;i<=50;i++)a[i]=-1;
		for(i=0;i<=50;i++)b[i]=-1;
		if(flag){
			for(i=0;i<l2;i++){
				if(a[y[i]-'a']!=1)a[y[i]-'a']=1;
				if(b[x[i]-'a']!=1)b[x[i]-'a']=1;
			}
			flag=false;
			for(i=0;i<26;i++){
				if(a[i]==1){
					if(b[i]==1){
						flag=true;;
						break;
					}
				} 
			}
		}
		if(flag)printf("YES\n");
		else printf("NO\n");

	}
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}
