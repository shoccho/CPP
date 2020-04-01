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
	

	// freopen("i.txt", "r", stdin);
	// freopen("o.txt", "w", stdout);

	int i,j,k,l,m,n,o,p,q=0;
	//char x[100000],y[1000000];
	string x,y;
	scanf("%d",&k);
	while(k--){
		cin>>x;
		cin>>y;
		reverse(x.begin(),x.end());
		reverse(y.begin(),y.end());
		int posy=0;
		for(i=0;i<y.size();i++){
			if(y[i]=='1'){
				posy=i;
				break;
			}
		}
		int posx=0;
		for(i=posy;i<x.size();i++){
			if(x[i]=='1'){
				posx=i;
				//printf("pausi %c\n",x[i] );
				break;
			}
		}
		printf("%d\n",posx-posy );
	}
	
	return 0;
}
