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
	

<<<<<<< HEAD
	freopen("i.txt", "r", stdin);
	freopen("o.txt", "w", stdout);
=======
	// freopen("i.txt", "r", stdin);
	// freopen("o.txt", "w", stdout);
>>>>>>> reg

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&o);
	while(o--){
		scanf("%d %d",&n,&m);
		char a[n];
<<<<<<< HEAD
		while(m){
			int c=m%2;
			m/=2;
		}
=======
		int pos1=0;
		int pos2=0;
		for(i=n-2;i>=0;i--){
			if(m<=(n-i-1)){
				pos1=i;
				pos2=n-m;
				break;
			}
			m-=(n-i-1);
		}
		for(i=0;i<n;i++){
			if(i==pos1  || i==pos2)printf("b");
			else printf("a");
		}
		printf("\n");
>>>>>>> reg
	}
	
	return 0;
}