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
	int a1,a2,k1,k2,cards;
	scanf("%d %d %d %d %d",&a1,&a2,&k1,&k2,&cards);
	if(k1<k2){
		swap(a1,a2);
		swap(k1,k2);
	}
	int min=max(0,cards-(((a1*(k1-1))+(a2*(k2-1)))));
	printf("%d ",min );
	
	int max=0;
	
		while(a2 && cards>=k2){
			cards-=k2;
			a2--;
			max++;
		}

		while(a1 && cards>=k1){
			cards-=k1;
			a1--;
			max++;
		}

	printf("%d\n", max);

#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}