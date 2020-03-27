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
	scanf("%d",&n);
	std::map<int, int> map;
	ll res=0;
	int max=0;
	while(n--){
		scanf("%d",&p);
		res+=p;
		if(p>max)max=p;
	}
	if(res%2==0 && (res-max)>=max){
		printf("YES\n");
	}
	
	else printf("NO\n");
	return 0;
}