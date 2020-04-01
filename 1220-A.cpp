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
	char x[100000],y[1000000];
	

	scanf("%d",&k);
	char c;
	int z=0;
	int e=0;
	int r=0;
	o=0;
	n=0;
	vi res;

	for(i=0;i<=k;i++){
		scanf("%c",&c);
		
		if(c=='r')r++;
		
		else if(c=='n')n++;
		// if(o>=1 && n >=1 && e>=1){
		// 	o--;
		// 	n--;
		// 	e--
		// 	res.PB(1);
		// }
		// if(z>=1 && e>=1 && r>=1 && o>=1){
		// 	z--;
		// 	r--;
		// 	o--;
		// 	e--;
		// 	res.PB(0);
		// }

	}


while(n--)printf("1 ");
while(r>1){printf("0 ");r--;}
if(r)printf("0");


#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}