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
		
	scanf("%d",&n);
	char x[n+10];
	cin>>x;
	l=strlen(x);
	int bc=0,wc=0;
	char covb[n],covw[n];

	for(i=0;i<l;i++){
		covb[i]=x[i];
		covw[i]=x[i];
		if(x[i]=='B')bc++;
		else wc++;
	}
	
	if(wc==0 || bc==0)printf("0\n");
	else {
		char c;
		int coun=0;
		vi ind;
		bool f=true,nf=true;
		for(i=0;i<l;i++){
			if(i<l-1){				
				if(covw[i]!='W'){
					//printf("%c %d inf\n",x[i],i );
					coun++;
					ind.PB(i+1);
					covw[i]='W';
					if(covw[i+1]=='B')covw[i+1]='W';
					else covw[i+1]='B';
				}
			}
			else if(i==l-1){
				if(covw[i]=='B'){
					f=false;
				}
			}
		}
		int bcw=0;
		vi bin;
		for(i=0;i<l;i++){
			if(i<l-1){
				if(covb[i]!='B'){
					bcw++;
					bin.PB(i+1);
					covb[i]='B';
					if(covb[i+1]=='B')covb[i+1]='W';
					else covb[i+1]='B';
				}
			}
			else if(i==l-1){
				if(covb[i]=='W')nf=false;

				}
			}
		bool fin;
		if(bcw<coun && nf)	{
				printf("%d\n",bcw );	
				for(int s:bin)printf("%d ",s);	
		}
		else if(coun<bcw && f){
			printf("%d\n",coun );
			for(int s:ind)printf("%d ",s);	
		}	
		else if(nf){
				printf("%d\n",bcw );	
				for(int s:bin)printf("%d ",s);	
		
			}
		else if(f){
			printf("%d\n",coun );	

				for(int s:ind)printf("%d ",s);	
			
		}
		
		else printf("-1\n");
	}

	
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}