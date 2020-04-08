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

		char x[100000];
		bool f=true;

		cin>>x;
		l=strlen(x);
		if(l==1){
			if(x[0]=='?')printf("a\n");
			else printf("%s\n", x);
			continue;
		}
		if(l==2 && x[0]== '?' && x[1]=='?'){

			printf("ab\n");
			continue;
		}
		char ss[3] ={'a','b','c'};
		for(i=0;x[i]!='\0';i++){
			if(x[i]==x[i+1] && x[i]!='?')f=false;
			if(x[i]=='?'){
				char prev;
				char next;
				if(i==0)	prev='d';
				else prev=x[i-1];
				if(i==l-1)next='e';
				else next=x[i+1];
				int pp=0;
				for(j=0;j<3;j++){
					if(ss[j]!=next && ss[j]!=prev)break;
				}
				x[i]=ss[j];
			}
		}

		if(f)printf("%s\n",x);
		else printf("-1\n");
	}
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
} 	