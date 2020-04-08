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
	///char x[100000],y[1000000];
	scanf("%d",&k);
	while(k--){
		char x[501];
		scanf("%s",x);
		l=strlen(x);
		std::map<char, int> ma;
		for(i=0;i<l;i++){
			if(x[i]=='9')continue;
			if(i<l-1 && x[i]==x[i+1])
				{
					x[i]='9';
					x[i+1]='9';
					i++;
				}
			else if(i<l-1 && x[i]!=x[i+1]){
				ma[x[i]]=1;
			}
			else if(i==l-1){
				if(x[i]!=x[i-1])ma[x[i]]=1;
			}
		}
		for(auto c :ma){
			printf("%c", c.F);
		}
		printf("\n");
	}


#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}