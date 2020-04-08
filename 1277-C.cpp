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
	scanf("%d",&k);
	while(k--){
		char x[999999];
		scanf("%s",x);
		vi ind;
		l=strlen(x);
		for(i=0;i<l;i++){
			if(x[i]=='o'){
				if(i>1 && x[i-2]=='t' &&  x[i-1]=='w')ind.PB(i+1);
				else if(i<l-2 &&  x[i+1]=='n' && x[i+2]=='e')ind.PB(i+1);
			}
		}
		cout<<ind.size()<<endl;
		for(auto c: ind)printf("%d ",c );
		printf("\n");
	}

#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}