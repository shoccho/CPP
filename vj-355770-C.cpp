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
bool pali(int x,int y){
	return(x%10==y /10 && x/10 ==y%10);
}

int main()
{	
    
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("i.txt", "r", stdin);
	freopen("o.txt", "w", stdout);
#endif
	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	cin>>x;
	int h1=x[0]-'0';
	int h2=x[1]-'0';
	int m1=x[3]-'0';
	int m2=x[4]-'0';
	int h=h1*10+h2;
	m= m1*10+m2;
	m++;
	if(m>59){
		m=0;
		h++;
		if(h>23)h=0;
	}

	while(!(pali(h,m))){
			m++;
		if(m>59){
			m=0;
			h++;
			if(h>23)h=0;
		}
	}
	string ans;

	//if(h<10)ans+='0';
	ans+=h/10+'0';
	ans+=h%10+'0';
	ans+=':';
	ans+=m/10+'0';
	ans+=m%10+'0';
	cout<<ans<<"\n";
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}


